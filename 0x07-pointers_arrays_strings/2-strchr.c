#include <stdio.h>
#include "main.h"

int main() {
    char str[] = "Hello, world!";
    char *result = _strchr(str, 'w');
    if (result != NULL) {
        printf("Found character '%c' at position %ld.\n", *result, result - str);
    } else {
        printf("Character not found.\n");
    }
    return 0;
}
