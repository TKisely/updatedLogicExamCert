//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_AWARD_H
#define UPDATEDLOGICEXAMCERT_AWARD_H


#include <string>
#include "Student.h"

using namespace std;

class Award{
private:
    string subjectText;
public:
    Award();
    Award(const Student&,const string&);

    void printOut()const;

    bool setText(const string&);
    string getText()const;
};


#endif //UPDATEDLOGICEXAMCERT_AWARD_H
