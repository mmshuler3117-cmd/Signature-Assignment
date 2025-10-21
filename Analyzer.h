#pragma once
#ifndef ANALYZER_H
#define ANALYZER_H
#include <string>

using namespace std;

class Analyzer
{
public:
	Analyzer();
	Analyzer(int* values, int size);
	virtual ~Analyzer();				
	virtual string analyze() = 0;

private:
	void cloneValues(int* values, int size);
protected:
	int* dataArr;						
	int dataSize;						
};

#endif