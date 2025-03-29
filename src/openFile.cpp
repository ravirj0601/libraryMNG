#include"../include/openFile.h"

bool FileHandler::checkFile(string a){
    ifstream file(a);    
    return file.good();
}

bool FileHandler::write(string fileName, string data){
    if(!checkFile(fileName)){
        cout << "File does not exist... \n";
        // return 0;
    }
    cout << fileName << "...Test" << endl;
    ofstream file(fileName,ios::in | ios::ate);
    if(file.is_open()){
        file << data + "\n";  
        cout << "Testing.. " << endl;
        file.close();
    }
    else{
        cout << "Unable to open File...\n";
    }
    return 1;
}

string FileHandler::read(string fileName, string bookName){
    if(!checkFile(fileName)){
        cout << "File does not exist... \n";
        return "";
    }
    string line;
    ifstream file(fileName);
    if(file.is_open()){
        cout << "Testing... \n";
        while(getline(file, line)){
            cout << "Testing... \n";
            if(line.find(bookName) != string::npos){
                cout << line << "\n";
                file.close();
                return line;
            }
            else{
                file.close();
                cout << "Record not available....\n";
            }
        }
        
    }
    return "";
}

bool FileHandler::readAll(string fileName){
    if(!checkFile(fileName)){
        cout << "File does not exist... \n";
        return 0;
    }
    string line;
    ifstream file(fileName);
    if(file.is_open()){
        while(getline(file, line)){
            cout << line << "\n";  
        }        
        file.close();
    }
    return 1;
}


bool FileHandler::update(string fileName, string lineName, string data){
    if(!checkFile(fileName)){
        cout << "File does not exist... \n";
        return 0;
    }
    string line;
    ifstream oldfile(fileName);
    ofstream temp("temp.txt");
    bool found = false;
    if(oldfile.is_open() && temp.is_open()){
        while(getline(oldfile, line)){
            if(line.find(lineName) != string::npos){
                cout << "Found...\n";
                temp << data + "\n";
                found = true;
            }else{
                temp << line << "\n";
            }
        }
        oldfile.close();
        temp.close();
    }
    if(found){
        std::remove(fileName.c_str());
        std::rename("temp.txt", fileName.c_str());
    }

    return 1;
}   


bool FileHandler::fileRemove(string fileName, string lineName){
    if(!checkFile(fileName)){
        cout << "File does not exist... \n";
        return 0;
    }
    string line;
    ifstream oldfile(fileName);
    ofstream temp("temp.txt");
    bool found = false;
    if(oldfile.is_open() && temp.is_open()){
        while(getline(oldfile, line)){
            if(line.find(lineName) != string::npos){
                cout << "Found...\n";
                found = true;
            }else{
                temp << line << "\n";
            }
        }
        oldfile.close();
        temp.close();
    }
    if(found){
        std::remove(fileName.c_str());
        std::rename("temp.txt", fileName.c_str());
    }

    return 1;
}   

