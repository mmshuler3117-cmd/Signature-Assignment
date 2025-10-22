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
    cout << endl;       // for presentation purposes
    int dupCount = 0;
    if (!dataArr || dataSize == 0)
    {
        cout << "No data to display.\n";
        return "";
    }
    sort(dataArr, dataArr + dataSize);
    for (int i = 0; i < dataSize - 1; i++)
    {
        if (dataArr[i] == dataArr[i + 1])
        {
            if (i == 0 || dataArr[i] != dataArr[i-1])
            {
                cout << dataArr[i] << " ";
                dupCount++;
            }
        }
    }

    return ("\nThere were " + to_string(dupCount) + " duplicated values (listed above)\n");
}

