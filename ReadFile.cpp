#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


#include "ReadFile.h"





ReadFile::ReadFile(const char* nomeFile){


    std::string risultatoLettura;
    std::ifstream ReadFile;

    ReadFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

    try
    {
        ReadFile.open(nomeFile);
        std::stringstream  nomeFileStram;

        nomeFileStram << ReadFile.rdbuf();

        risultatoLettura = nomeFileStram.str();

        std::cout << risultatoLettura << '\n';

    }
    catch(const std::exception& e)
    {
        std::cout << "ERROR::SHADER::FILE_NOT_SUCCESFULLY_READ" << std::endl;
    }
    
}

ReadFile::~ReadFile(){

}



