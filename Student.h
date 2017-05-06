//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_STUDENT_H
#define UPDATEDLOGICEXAMCERT_STUDENT_H


#include "Person.h"

class Student: public Person {
private:
    unsigned studentID;
    string className;
public:
    Student();
    Student(const string &, const string &, const Date &, const unsigned, const string&);
    Student(const Student&);

    bool setClassName(const string&);
    bool setStudentID(const unsigned);

    unsigned getStudentID()const;

    string printToString()const;
};


#endif //UPDATEDLOGICEXAMCERT_STUDENT_H
