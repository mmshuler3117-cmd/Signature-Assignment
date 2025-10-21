#pragma once
#ifndef MISSINGANALYZER_H
#define MISSINGANALYZER_H
#include "Analyzer.h"

class MissingAnalyzer : public Analyzer
{
public:
    MissingAnalyzer();
    MissingAnalyzer(int* values, int size);  
    virtual string analyze() override;       
};

#endif // !MISSINGANALYZER_H
