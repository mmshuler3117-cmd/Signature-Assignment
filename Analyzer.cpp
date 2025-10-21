#include "Analyzer.h"
#include <string>
#include <climits>  // Required for INT_MAX

using namespace std;

/**
    Constructs an analyzer, initializing array and its size.
*/
Analyzer::Analyzer()
{
    dataArr = nullptr;
    dataSize = 0;
}

/**
    Constructor to copy elements of array and its size
    @values the integer pointer representing an array of integers
    @size the integer representing the array's size
*/
Analyzer::Analyzer(int* values, int size)
{
    cloneValues(values,size);
}

/**
    Destructor to delete the dynamic array.
*/
Analyzer::~Analyzer()
{
    delete[] dataArr;
}

void Analyzer::cloneValues(int* values, int size)
{
    dataSize = size;
    dataArr = new int[dataSize];
    for (int i = 0; i < dataSize; i++)
    {
        dataArr[i] = values[i];         // copy all data, including first value
    }
}


