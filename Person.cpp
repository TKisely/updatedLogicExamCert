//
// Created by TKisely on 2017. 04. 24..
//

#include "Person.h"

static unsigned lastID=0; //ID will start from 1

Person::Person():ID(lastID++) {

}

Person::Person(const string &pFirstName, const string &pLastName, const Date &pDateOfBirth)
        :firstName(pFirstName),lastName(pLastName),birthDate(pDateOfBirth),ID(lastID++) {
}

Person::Person(const Person &other)
        :firstName(other.firstName),lastName(other.lastName),birthDate(other.birthDate),ID(other.ID) {
}

string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

Date Person::getBirthDate() const {
    return Date();
}

unsigned int Person::getID() const {
    return ID;
}

string Person::printToString() const {
    string ret=getFirstName();
    ret+='/n';
    ret+=getLastName();
    ret+='/n';
    return ret;
}

bool Person::printToFile() const {
    return false;
}

bool Person::printToConsole() const {
    return false;
}


