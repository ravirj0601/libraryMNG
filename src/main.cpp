#include<iostream>
#include<map>
#include "../include/books.h"
#include "../include/users.h"

int main(){
    std::map <std::string, Books> newEntry;
   
    std::string bookID, bookTitle;
    int bookQuantity;
    
    std::cout << "Enter Book ID: ";
    std::cin >> bookID;
    std::cout << "Enter Book Title: ";
    std::cin.ignore(); // To ignore the newline character left in the buffer
    std::getline(std::cin, bookTitle);
    std::cout << "Enter Book Quantity: ";
    std::cin >> bookQuantity;
    
    newEntry[bookID] = Books(bookID, bookTitle, bookQuantity);
    
    // Create an object with the same name as its ID
    Books book = newEntry[bookID];
    
    return 0;
}
