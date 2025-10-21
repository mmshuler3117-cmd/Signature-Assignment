#include <iostream>
#include <fstream>
#include <string>
#include <climits>
#include <algorithm> // for sorting array
#include "DuplicateAnalyser.h"

using namespace std;

DuplicateAnalyser::DuplicateAnalyser()
{
}

DuplicateAnalyser::DuplicateAnalyser(int* values, int size) : Analyzer(values, size)
{
    // Base class constructor passing the parameter values per Module 3 instructions
}

// This will scan the data and determine which values appear more than once.
string DuplicateAnalyser::analyze()
{
    int dupCount = 0;
    sort(dataArr, dataArr + dataSize);
    vector<int> duplicates;                     // storing duplicates in vector to call size() member function later
    for (int i = 0; i < dataSize - 1; i++)
    {
        if (dataArr[i] == dataArr[i + 1]);
        if (duplicates.empty() || duplicates.back() != dataArr[i])
        {
            duplicates.push_back(dataArr[i]);
        }
    }
    dupCount = duplicates.size();

    return ("There were " + to_string(dupCount) + " duplicated values");
}

