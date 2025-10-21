#pragma once
#ifndef DUPLICATEANALYSER_H
#define DUPLICATEANALYSER_H
#include <string>
#include <vector>
#include "Analyzer.h"

class DuplicateAnalyser : public Analyzer
{
public:
    DuplicateAnalyser();
    DuplicateAnalyser(int* values, int size);   
    virtual string analyze() override;          
};


#endif // !DUPLICATEANALYSER_H


