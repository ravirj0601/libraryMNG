#ifndef BOOKS_H
#define BOOKS_H

#include<iostream>
#include<fstream>

using namespace std;

class Books{
    private:
        char name;
        int totalNo;
    public:
        int getNumber(char name);
        int search(char name);
        
};


#endif

