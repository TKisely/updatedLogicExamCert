//
// Created by TKisely on 2017. 04. 24..
//
#include <vector>
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


void Printer::printToFile(const IPrintable &pPrintable, const string pNameOfTheFile) {
    ofstream myFile;
    string fileName=pNameOfTheFile+".txt";
    myFile.open(fileName,ios::out);
    unsigned size=pPrintable.printToString().length();
    for (int i = 0; i < size; ++i) {
        if(pPrintable.printToString()[i]!='\n'){
            myFile<<pPrintable.printToString()[i];
        } else
            myFile<<"\r\n";
    }
    myFile.close();
}
