//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_MARK_H
#define UPDATEDLOGICEXAMCERT_MARK_H

#include <string>
#include "IPrintable.h"

using namespace std;

class Mark: public IPrintable {
private:
    string subject;
    unsigned num;
public:
    Mark();
    Mark(const string&,const unsigned=1);

    bool setNum(const unsigned);
    bool setSubject(const string&);

    unsigned getNum()const;
    string getSubject()const;

    string printToString()const;
    bool printToFile()const;
    bool printToConsole()const;
};


#endif //UPDATEDLOGICEXAMCERT_MARK_H
