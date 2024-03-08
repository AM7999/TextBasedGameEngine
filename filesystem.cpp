#include <iostream>
#include <string>
#include <fstream>
/*
    Thanks to my Friends at school for permitting me to use this big ole source file for easy file management
*/

//Create/clear/delete/check
void FILE_NEW(std::string filename){
    std::ofstream file(filename);
}
void FILE_DELETE(std::string filename){
    remove(filename.c_str());
}
void FILE_CLEAR(std::string filename){
    std::ofstream file(filename);
    file.close();
}
bool FILE_CHECK(std::string filename){
    std::ifstream file(filename);
    return file.good();
}

//Writing(string, int, float, double, bool, char)
void FILE_STRING(std::string filename, std::string data){
    std::ofstream file(filename, std::ios::app);
    if(file.is_open()){
        file << data << std::endl;
    }
}
void FILE_INT(std::string filename, int data){
    std::ofstream file(filename, std::ios::app);
    if(file.is_open()){
        file << data << std::endl;
    }
}
void FILE_FLOAT(std::string filename, float data){
    std::ofstream file(filename, std::ios::app);
    if(file.is_open()){
        file << data << std::endl;
    }
}
void FILE_DOUBLE(std::string filename, double data){
    std::ofstream file(filename, std::ios::app);
    if(file.is_open()){
        file << data << std::endl;
    }
}
void FILE_BOOL(std::string filename, bool data){
    std::ofstream file(filename, std::ios::app);
    if(file.is_open()){
        file << data << std::endl;
    }
}
void FILE_CHAR(std::string filename, char data){
    std::ofstream file(filename, std::ios::app);
    if(file.is_open()){
        file << data << std::endl;
    }
}

//Extracting(string,int,float,double,bool)
void FILE_EXTRACT_STRING(std::string filename, int line, std::string &data){
    std::ifstream file(filename);
    std::string temp;
    for(int i = 0; i < line ; i++){
        std::getline(file, temp);
    }
    data = temp;
}
void FILE_EXTRACT_INT(std::string filename, int line, int &data){
    std::ifstream file(filename);
    std::string temp;
    for(int i = 0; i < line ; i++){
        std::getline(file, temp);
    }
    data = stoi(temp);
}
void FILE_EXTRACT_FLOAT(std::string filename, int line, float &data){
    std::ifstream file(filename);
    std::string temp;
    for(int i = 0; i < line ; i++){
        std::getline(file, temp);
    }
    data = stof(temp);
}
void FILE_EXTRACT_DOUBLE(std::string filename, int line, double &data){
    std::ifstream file(filename);
    std::string temp;
    for(int i = 0; i < line ; i++){
        std::getline(file, temp);
    }
    data = stod(temp);
}
void FILE_EXTRACT_BOOL(std::string filename, int line, bool &data){
    std::ifstream file(filename);
    std::string temp;
    for(int i = 0; i < line ; i++){
        std::getline(file, temp);
    }
    data = (temp == "true");
}
