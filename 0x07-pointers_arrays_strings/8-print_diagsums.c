#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: values of the array
 * @size: size of square
 * Return: nothing
 */

void print_diagsums(int *a, int size) {
    int i, j, sum1 = 0, sum2 = 0;
    for (i = 0; i < size; i++) {
        // add the elements of the first diagonal (top-left to bottom-right)
        sum1 += *(a + i*size + i);

        // add the elements of the second diagonal (top-right to bottom-left)
        sum2 += *(a + i*size + size - 1 - i);
    }
    printf("Sum of diagonal 1: %d\n", sum1);
    printf("Sum of diagonal 2: %d\n", sum2);
}
