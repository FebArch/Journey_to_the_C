#include <stdio.h>

int main() {
    // 1. Make a bowl that holds EXACTLY 4 bytes
    unsigned char buffer[4]; 
    
    // 2. Open the file safely
    FILE *fp = fopen("config1.bin", "rb"); // Try this with your 9-byte or 12-byte file!
    if (fp == NULL) {
        printf("Failed to open file!\n");
        return 1;
    }

    int offset = 0; // To keep track of our "street address" in the file
    size_t bytes_read;

    printf("Hex Dump of config1.bin:\n");
    printf("Offset   | Bytes\n");
    printf("------------------------\n");

    // 3. The safe loop: 
    // "Read 1-byte pieces, up to 4 at a time, into 'buffer'."
    while ((bytes_read = fread(buffer, sizeof(unsigned char), 4, fp)) > 0) {
        
        // Print the offset (e.g., 00000000, 00000004)
        // printf(">> %zu | ", bytes_read);
        printf("%08x | ", offset);

        // Loop through however many bytes we just safely caught in our bowl
        for (int i = 0; i < bytes_read; i++) {
            // Print each byte as a 2-character Hexadecimal number
            printf("%02x ", buffer[i]); 
        }
        
        printf("\n");
        
        // Move our offset address forward by however many bytes we read
        offset += bytes_read; 
    }

    fclose(fp);
    return 0;
}