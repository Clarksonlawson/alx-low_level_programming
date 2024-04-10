/* 100-jump.c */
#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located,
 *         or -1 if value is not present in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    size_t jump = sqrt(size);
    size_t left = 0, right = 0;

    while (right < size && array[right] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)right, array[right]);
        left = right;
        right += jump;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)left, (unsigned long)right);

    right = (right < size) ? right : size - 1;

    size_t i;
    for (i = left; i <= right; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

