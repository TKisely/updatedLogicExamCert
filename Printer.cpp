//
// Created by TKisely on 2017. 04. 24..
//
//TODO::Printer Class .cpp
#include "Printer.h"

void Printer::printToFile(const IPrintable *pNeedToPrint, const unsigned number){
    ofstream myFile;
    myFile.open("documents.text",ios::out);
    for (int i = 0; i < number; ++i) {
        myFile<<pNeedToPrint[i].printToString();
        myFile<<std::endl;
    }
    myFile.close();

}

void Printer::printToFile(const IPrintable &pPrintable) {
    ofstream myFile;
    myFile.open("justPrinted.txt",ios::out);
    myFile<<pPrintable.printToString();
    myFile.close();

}
