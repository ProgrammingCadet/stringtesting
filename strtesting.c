
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str1[100] = ""; // Initialize using a static character array
    printf("----- str1 -----\nstrlen: %ld\nsizeof: %ld\n", strlen(str1), sizeof(str1)); // Print strlen and sizeof str1
    printf("Address: %lx\n", (long)str1);

    char* str2 = (char*)malloc(100 * sizeof(char)); // Initialize using malloc and char*
    printf("----- str2 -----\nstrlen: %ld\nsizeof: %ld\n", strlen(str2), sizeof(str2)); // Print strlen and sizeof str2
    printf("Address: %lx\n", (long)str2);

    free(str2);
}