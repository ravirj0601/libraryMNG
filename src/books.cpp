#include "../include/books.h"

int Books::newEntry(int bookID, string name, int totalNo){
    string bookid = std::to_string(bookID);
    string data = std::to_string(bookID) + "\t" + name + "\t" + std::to_string(totalNo);
    string check = fileHand.read(fileName, to_string(bookID));
    char in;
    if(!check.empty()){
        fileHand.write(fileName, data);
    }else{
        cout << "Data Already exist....\nData: " << check << endl;

        cout << "Do you want to update the record...[Y/y]\n";
        cin >> in;
        if(in == 'Y' || in == 'y'){
            fileHand.update(fileName, to_string(bookID), data);
        }
    }

    return 0; 
}   
