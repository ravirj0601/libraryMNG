#ifndef BOOKS_H
#define BOOKS_H

#include<iostream>
//#include<fstream>
#include"../include/openFile.h"

using namespace std;

class Books {
    private:
        FileHandler fileHand;
    public:
        string fileName = "../data/Books.txt";
        string id;
        string name;
        int totalNo;
        int newEntry(int, string, int);
        int updateEntry(int, string, int);
        int getInfo(int, string);            
        // Books() : id(""), name(""), totalNo(0) {}
        Books() : id(""), name(""), totalNo(0) {
            newEntry(0, "", 0);
        }
        Books(std::string n, std::string nm, int tNo) : id(n), name(nm), totalNo(tNo) {}
};

#endif

