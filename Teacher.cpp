//
// Created by TKisely on 2017. 04. 24..
//

#include "Teacher.h"

Teacher::Teacher():Person() {
}

Teacher::Teacher(const string &pFirstName, const string &pLastName, const Date &pDate,
                 const string &pSubject, const string &pClass, const unsigned pPedID)
        :Person(pFirstName,pLastName,pDate) {
    setOwnClass(pClass);
    setPedID(pPedID);
    setSubject(pSubject);
}

Teacher::Teacher(const Teacher &other) :Person(other),
         subject(other.subject),ownClass(other.ownClass),pedID(other.pedID) {
}

bool Teacher::setPedID(const unsigned pPedID) {
    if(pPedID<100000000&&pPedID>=10000000){
        this->pedID=pPedID;
        return true;
    }
    return false;
}

bool Teacher::setSubject(const string &pSubject) {
    if(pSubject.length()>0&&pSubject.length()<=20){
        this->subject=pSubject;
        return true;
    }
    return false;
}

bool Teacher::setOwnClass(const string &pClass) {
    if(pClass.length()>0&&pClass.length()<=10){
        this->ownClass=pClass;
        return true;
    }
    return false;
}

unsigned Teacher::getPedID() const {
    return pedID;
}

string Teacher::getSubject() const {
    return subject;
}

string Teacher::getOwnClass() const {
    return ownClass;
}

string Teacher::printToString() const {
    string ret=Person::printToString();
    ret+="Ped ID: ";
    ret+=std::to_string(pedID);
    ret+="\n";
    ret+="Subject: ";
    ret+=subject;
    ret+=" || Own class: ";
    ret+=ownClass;
    return ret;
}
