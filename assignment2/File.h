#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

using namespace std;

class File {
private:
    string name;
    string content;
    Date lastModified;

public:
    // Constructor
    File(const string& name, const string& content, Date& date);

    // Member functions
    bool lessThan(File& other);
    void print();
    void printContents();
};

#endif
