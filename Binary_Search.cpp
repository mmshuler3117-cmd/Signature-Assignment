#include "binary_search.h"

// Helper function that main() will call
int binary_search(int arr[], int value, int size)
{
    return binary_search_recursive(arr, value, 0, size - 1);
}

// Recursive function that actually performs binary search
int binary_search_recursive(int arr[], int value, int left, int right)
{
    if (left > right)
        return -1;  // Value not found

    int mid = (left + right) / 2;

    if (arr[mid] == value)
        return mid;
    else if (value < arr[mid])
        return binary_search_recursive(arr, value, left, mid - 1);
    else
        return binary_search_recursive(arr, value, mid + 1, right);
}