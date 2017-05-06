//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_TEACHER_H
#define UPDATEDLOGICEXAMCERT_TEACHER_H


#include "Person.h"

class Teacher: public Person {
private:
    string subject;
    string ownClass;
    unsigned pedID;
public:
    Teacher();
    Teacher(const string &, const string &, const Date &,const string&, const string&, const unsigned);
    Teacher(const Teacher&);

    bool setPedID(const unsigned);
    bool setSubject(const string&);
    bool setOwnClass(const string&);

    unsigned getPedID()const;
    string getSubject()const;
    string getOwnClass()const;

    string printToString()const;
};


#endif //UPDATEDLOGICEXAMCERT_TEACHER_H
