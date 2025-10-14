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

/**
    Determines the mean, minimum value, and maximum value from the values in the array.
    @return string message with the calculated statistic   
*/
string Analyzer::analyze()
{
    double meanValue = 0;
    int sumValue = 0;
    int countValue = 0;
    int minValue = INT_MAX;         // the maximun value an int can hold
    int maxValue = 0;

    // Assuming the first value is the number of elements in array
    for (int i = 1; i < dataArr[0]; i++)
    {
        sumValue = sumValue + dataArr[i];
        countValue++;

        if (dataArr[i] > maxValue)
        {
            maxValue = dataArr[i];
        }
        if (dataArr[i] < minValue)
        {
            minValue = dataArr[i];
        }
    }

    meanValue = static_cast<double>(sumValue) / countValue;
   
    return ("\nThe minimum value is " + to_string(minValue) +
            "\nThe maximum value is " + to_string(maxValue) +
            "\nThe mean value is " + to_string(meanValue));
}

/**
    Creates an integer array and copies the values from the array
    passed into its elements, copies the size, and returns nothing.
    @param values the array to be copied
    @size the data size
*/
void Analyzer::cloneValues(int* values, int size)
{
    dataSize = size;
    dataArr = new int[dataSize];
    for (int i = 0; i < dataSize; i++)
    {
        dataArr[i] = values[i];         // copy all data, including first value
    }
}


