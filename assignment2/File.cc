#include "File.h"
#include <iostream>


File::File(const string& name, const string& content, Date& date) 
    : name(name), content(content), lastModified(date) {}

bool File::lessThan(File& other) {
    return lastModified.lessThan(other.lastModified);
}


void File::print() {
    cout << "File: " << name << endl;
    cout << "Last modified: ";
    lastModified.print();
    cout << endl;
}


void File::printContents() {
    print();
    cout << "Content: " << content << endl;
}
