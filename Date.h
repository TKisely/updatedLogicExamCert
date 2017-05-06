//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_DATE_H
#define UPDATEDLOGICEXAMCERT_DATE_H


#include <string>
#include "IPrintable.h"

using namespace std;

class Date :public IPrintable{
private:
    unsigned year;
    unsigned month;
    unsigned day;
public:
    Date();
    Date(const unsigned,const unsigned=0,const unsigned=0);

    bool setYear(const unsigned);
    bool setMonth(const unsigned);
    bool setDay(const unsigned);

    unsigned getYear()const;
    unsigned getMonth()const;
    string getMonthName()const;
    unsigned getDay()const;

    string printToString()const;
    bool printToConsole()const;

};

#endif //UPDATEDLOGICEXAMCERT_DATE_H
