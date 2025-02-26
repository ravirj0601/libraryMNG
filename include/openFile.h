#ifndef OPENFILE_H
#define OPENFILE_H

#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>

using namespace std;
class FileHandler{
    private:
        bool checkFile(string a);
    public:
        bool write(string, string);
        std::string read(string, string);
        bool update(string, string, string);
        bool fileRemove(string, string);
        bool readAll(string);
};


#endif  /*  OPENFILE_H */



