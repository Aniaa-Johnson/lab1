#include <stdio.h>
#include <stdlib.h>
#include "lab1.h"

void testReadString() {
    FILE *file = fopen("test.txt", "r");
    if (!file) {
        perror("Failed to open file");
        return;
    }
    
    char *line = readString(file);
    printf("Read string: %s\n", line);
    free(line);
    fclose(file);
}

void testMysteryExplode() {
    char *result1 = mysteryExplode("Code");
    printf("Exploded 'Code': %s\n", result1);
    free(result1);

    char *result2 = mysteryExplode("abc");
    printf("Exploded 'abc': %s\n", result2);
    free(result2);

    char *result3 = mysteryExplode(":-)");
    printf("Exploded ':-)': %s\n", result3);
    free(result3);
}

int main() {
    printf("Testing readString:\n");
    testReadString();
    
    printf("\nTesting mysteryExplode:\n");
    testMysteryExplode();

    return 0;
}
