#include <stdio.h>

int main() {
    FILE *fp;  // File pointer
    char buffer[50];  // Buffer to hold file contents

    // Open file for writing
    fp = fopen("file.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Write to file
    fprintf(fp, "Hello, world!\n");

    // Close file
    fclose(fp);

    // Open file for reading
    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Read file contents into buffer
    fgets(buffer, 50, fp);

    // Close file
    fclose(fp);

    // Print file contents
    printf("File contents: %s", buffer);

    return 0;
}

