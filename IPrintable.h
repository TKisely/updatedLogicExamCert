//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_IPRINTABLE_H
#define UPDATEDLOGICEXAMCERT_IPRINTABLE_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class IPrintable {
public:
    virtual string printToString()=0;
    virtual bool printToFile()=0;
    virtual bool printToConsole()=0;
};


#endif //UPDATEDLOGICEXAMCERT_IPRINTABLE_H
