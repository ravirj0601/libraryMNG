#include<iostream>
#include<map>
#include "../include/books.h"
#include "../include/users.h"

int main(){
    map <string, Books> newEntry;
    
    newEntry["BI01"] = Books("BI01");
    
    return 0;
}
