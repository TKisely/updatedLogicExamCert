//
// Created by TKisely on 2017. 04. 24..
//

#include "Student.h"

Student::Student():Person() {
}

Student::Student(const string &pFirstName, const string &pLastName,
                 const Date &pDateOfBirth, const unsigned pStudentID, const string &pClassName)
        :Person(pFirstName,pLastName,pDateOfBirth) {
    setClassName(pClassName);
    setStudentID(pStudentID);
}

Student::Student(const Student &other) {
//TODO::Student Copy Constructor
}

bool Student::setClassName(const string &pClassName) {
    if(pClassName.length()<10&&pClassName.length()>0){
        this->className=pClassName;
        return true;
    }
    return false;
}

bool Student::setStudentID(const unsigned pStudentID) {
    if(pStudentID<100000000&&pStudentID>=10000000){
        this->studentID=pStudentID;
        return true;
    }
    return false;
}

unsigned Student::getStudentID() const {
    return studentID;
}

string Student::printToString() const {
    //TODO::update Student Print method
    return Person::printToString();
}


