#ifndef BOOKS_H
#define BOOKS_H

#include<iostream>
//#include<fstream>
#include"../include/openFile.h"

using namespace std;
class Books{
    
    private:
        string fileName = "../data/Books.txt";
        FileHandler fileHand;
    public:
        string id;
        string name;
        int totalNo;
        Books(std::string n) : id(n){}
        int newEntry(int, string, int);
        int updateEntry(int, string, int);
        int getInfo(int, string);            
};


#endif

