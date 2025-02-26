#ifndef BOOKS_H
#define BOOKS_H

#include<iostream>
//#include<fstream>
#include"../include/openFile.h"

using namespace std;
class Books{
    private:
        int id;
        char name;
        int totalNo;
        string fileName = "../data/Books.txt";
        FileHandler fileHand;
    public:
        int newEntry(int, string, int);
        int updateEntry(int, string, int);
        int getInfo(int, string);            
};


#endif

