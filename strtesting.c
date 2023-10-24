
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str1[100] = ""; // Initialize using a static character array
    strcpy(str1, "This is a 100 character long sentence, and I'm not gonna stop typing until I get to 100 chars. I ne");
    printf("----- str1 -----\nstrlen: %ld\nsizeof: %ld\n", strlen(str1), sizeof(str1)); // Print strlen and sizeof str1
    printf("Address: %lx\n", (long)str1);

    char* str2 = (char*)malloc(100 * sizeof(char)); // Initialize using malloc and char*
    strcpy(str2, "This is a 100 character long sentence, and I'm not gonna stop typing until I get to 100 chars. I ne");
    printf("----- str2 -----\nstrlen: %ld\nsizeof: %ld\n", strlen(str2), sizeof(str2)); // Print strlen and sizeof str2
    printf("Address: %lx\n", (long)str2);

    free(str2);
}