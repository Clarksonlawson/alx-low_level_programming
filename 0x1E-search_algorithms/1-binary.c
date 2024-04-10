#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located,
 *         or -1 if value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
        size_t left = 0, right = size - 1, mid;

        if (array == NULL)
                return (-1);

        while (left <= right)
        {
                print_array(array, left, right); /* Helper function to print the array */

                mid = left + (right - left) / 2;

                if (array[mid] == value)
                        return (mid);

                if (array[mid] < value)
                        left = mid + 1;
                else
                        right = mid - 1;
        }

        return (-1); /* Not found */
}

/**
 * print_array - Prints the elements of an array within a range.
 * @array: A pointer to the first element of the array.
 * @start: The index of the first element to print.
 * @end: The index of the last element to print.
 */
void print_array(int *array, size_t start, size_t end)
{
        size_t i;

        printf("Searching in array: ");
        for (i = start; i <= end; i++)
        {
                printf("%d", array[i]);
                if (i < end)
                        printf(", ");
        }
        printf("\n");
}

