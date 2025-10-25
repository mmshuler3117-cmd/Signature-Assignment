#include "Selection_Sort.h"

// Helper function to swap two integers
void swap_ints(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Selection Sort implementation
void selection_sort(int* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        // Find the index of the smallest element
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the current index with the found minimum
        if (minIndex != i)
        {
            swap_ints(arr[i], arr[minIndex]);
        }
    }
}
