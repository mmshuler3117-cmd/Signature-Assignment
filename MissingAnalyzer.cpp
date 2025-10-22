#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
#include <sstream>
#include "MissingAnalyzer.h"

using namespace std;

MissingAnalyzer::MissingAnalyzer()
{
}

MissingAnalyzer::MissingAnalyzer(int* values, int size) : Analyzer(values, size)
{
    // Base class constructor passing the parameter values per Module 3 instructions
}

string MissingAnalyzer::analyze()
{
    // MissingAnalyzer: counts missing integers in the inclusive range [min, max]
    if (dataSize <= 0) {
        return "MissingAnalyzer: dataset is empty — 0 missing values.";
    }

    int minv = dataArr[0];
    int maxv = dataArr[0];
    unordered_set<int> present;
    // present.reserve(dataSize * 2);    

    present.reserve(static_cast<size_t>(dataSize) * 2); 

    for (int i = 0; i < dataSize; ++i) {
        int v = dataArr[i];
        present.insert(v);
        if (v < minv) minv = v;
        if (v > maxv) maxv = v;
    }

    // Count numbers in [minv, maxv] that are not present
    int missingCount = 0;
    vector<int> missingValues;
    for (int x = minv; x <= maxv; ++x) {
        if (present.find(x) == present.end()) {
            ++missingCount;
            missingValues.push_back(x);
        }
    }

    ostringstream oss;
    oss << "MissingAnalyzer: in the range [" << minv << ", " << maxv << "] there are "
        << missingCount << " missing value(s).";
    if (!missingValues.empty()) 
    {
        oss << "\nMissing values: ";
        for (size_t i = 0; i < missingValues.size(); ++i) 
        {
            oss << missingValues[i] << " ";
            if ((i + 1) % 16 == 0)
            {
                oss << endl;
            }
        }
    }
    return oss.str();
}
