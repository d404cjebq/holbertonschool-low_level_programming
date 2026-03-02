#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements in the array
 *
 * Return: Nothing (void)
 */
void reverse_array(int *a, int n)
{
    int temp;
    int start = 0;
    int end = n - 1;

    /* Swap elements from both ends until reaching the middle */
    while (start < end)
    {
        /* Swap elements at positions start and end */
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        /* Move towards the middle */
        start++;
        end--;
    }
}
