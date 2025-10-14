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
	~Analyzer();
	string analyze();

private:
	int* dataArr;
	int dataSize;
	void cloneValues(int* values, int size);
};

#endif