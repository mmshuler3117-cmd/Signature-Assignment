#include <iostream>
#include <fstream>
#include "BinaryReader.h"
#include <string>

using namespace std;

BinaryReader::BinaryReader()
{
    arr = nullptr;
    size = 0;
}

// Constructor automatically reads from file
BinaryReader::BinaryReader(const string& name)
{
    readValues(name);
}

// Destructor frees allocated memory
BinaryReader::~BinaryReader()
{
    delete[] arr;

}

// Getter for array pointer
int* BinaryReader::getValues() const
{
    return arr;
}

// Getter for array size
int BinaryReader::getSize() const
{
    return size;
}

// Optional display helper
void BinaryReader::display() const
{
    int columns = 16;                           // Set the number of columns here
    if (!arr || size == 0)
    {
        cout << "No data to display.\n";
        return;
    }
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
        if ((i + 1) % columns == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

}

void BinaryReader::readValues(const string& name)
{
    ifstream inFile(name, ios::binary);
    if (!inFile) 
    {
        cerr << "Error: Could not open file " << name << " for reading.\n";
        arr = nullptr;
        size = 0;
        return;
    }

    // Read array size
    inFile.read(reinterpret_cast<char*>(&size), sizeof(size));

    // Allocate memory for array
    arr = new int[size];

    // Read array data
    inFile.read(reinterpret_cast<char*>(arr), sizeof(int) * size);

    inFile.close();

}