#include "StatisticsAnalyzer.h"
#include <string>
#include <climits>

using namespace std;

/**
    Constructor that takes an integer array and its size.
    Calls the base class constructor to initialize the data.
    @param values the integer pointer representing an array of integers
    @param size the integer representing the array's size
*/
StatisticsAnalyzer::StatisticsAnalyzer(int* values, int size) : Analyzer(values, size)
{
    // Base class constructor handles copying values
}

/**
    Determines the mean, minimum value, and maximum value from the values in the array.
    Properly processes all elements without using first element as count.
    @return string message with the calculated statistics   
*/
string StatisticsAnalyzer::analyze()
{
    double meanValue = 0;
    int sumValue = 0;
    int countValue = 0;
    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    // Process all elements in the array (0 to dataSize-1)
    for (int i = 0; i < dataSize; i++)
    {
        sumValue += dataArr[i];
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

    if (countValue > 0)
    {
        meanValue = static_cast<double>(sumValue) / countValue;
    }
   
    return ("\nThe minimum value is " + to_string(minValue) +
            "\nThe maximum value is " + to_string(maxValue) +
            "\nThe mean value is " + to_string(meanValue));
}