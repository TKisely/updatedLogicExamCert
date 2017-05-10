//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_PRINTER_H
#define UPDATEDLOGICEXAMCERT_PRINTER_H

#include <fstream>
#include <iostream>
#include "IPrintable.h"

//TODO::Printer class which is for Printing in Files
class Printer {
public:
    static void printToFile(const IPrintable&, const string="justPrinted");
    static void printToFile(const IPrintable*, const unsigned);
};


#endif //UPDATEDLOGICEXAMCERT_PRINTER_H
