#pragma once
#ifndef STATISTICSANALYZER_H
#define STATISTICSANALYZER_H
#include "Analyzer.h"
#include <string>

using namespace std;

class StatisticsAnalyzer : public Analyzer
{
public:
    StatisticsAnalyzer(int* values, int size);
    virtual string analyze() override;
};

#endif // STATISTICSANALYZER_H
