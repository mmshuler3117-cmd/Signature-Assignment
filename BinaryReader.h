#pragma once
#ifndef BINARYREADER_H
#define BINARYREADER_H
#include <string>

using namespace std;

class BinaryReader
{
public:
	BinaryReader();
	BinaryReader(const string& name);
	~BinaryReader();
	int* getValues() const;
	int getSize() const;
	void display() const;
private:
	void readValues(const string& name);
	int* arr;
	int size;
};

#endif // !BINARYREADER_H

