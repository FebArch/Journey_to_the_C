#include <stdio.h>
#include <stdlib.h>

char brackets[] = {'[', ']', '(', ')', '{', '}', '<', '>', '\0'};

typedef struct
{
    int top;
    int capacity;
    char *arr;
} stack;

int isEmpty(stack s);
int getBracketIndex(char bracket);
char popBracket(stack* s);
void bracketPush(stack *s, char element);
void printStack(stack s);

int main()
{
    stack s;
    s.top = -1;
    s.capacity = 30;
    s.arr = (char*) malloc(s.capacity*sizeof(char));

    if (s.arr == NULL)
    {
        printf("fail to allocate memory in heap!\n");
        return 1;
    }
    

    char *code = "( var x = { y: [1, 2, 3] ) };";
    int i = 0;

    while (code[i] != '\0')
    {
        int n=getBracketIndex(code[i]); // if cgetBraketIndex(char) encounters bracket in the string it returns a even index from the global variable brackets[] else n is set to -1

        if ((n % 2) == 0)  // if opening brackets then push this opening bracket to stack;
        {
            bracketPush(&s, code[i]);
        }else if(n == (getBracketIndex(s.arr[s.top])+1)){  // closing bracket
            popBracket(&s);
        }else if((n != -1) && n != getBracketIndex(s.arr[s.top])+1){
            printf("Incorrect closing brace: %c at index %d", code[i], i);
        }
        i++;
    }
    free(s.arr);
    return 0;
}

int isEmpty(stack s)
{
    if (s.top < s.capacity)
    {
        return 1; // yes
    }
    return 0;
}

int getBracketIndex(char bracket)
{

    int i = 0;
    while (brackets[i] != '\0')
    {
        if (bracket == brackets[i])
        {
            return i;
            break;
        }
        i++;
    }
    return -1;
}

void bracketPush(stack *s, char element)
{
    if (isEmpty(*s))
    {
        s->top++;
        s->arr[s->top] = element;
    }
}

void printStack(stack s)
{
    for (int i = s.top; i >= 0; i--)
    {
        printf("|  %c   |\n", s.arr[i]);
        printf("|------|\n");
    }
    printf("top is %d\n", s.top);
}


char popBracket(stack* s){
    char temp = s->arr[s->top];
    s->top--;
    return temp;
}
