#pragma once
#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

// Public helper function (this is the one main() will call)
int binary_search(int arr[], int value, int size);

// Recursive function prototype (internal use)
int binary_search_recursive(int arr[], int value, int left, int right);

#endif