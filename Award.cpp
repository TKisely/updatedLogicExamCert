//
// Created by TKisely on 2017. 04. 24..
//

#include "Award.h"
Award::Award() {
}

Award::Award(const string &pName, const string &pSubject)
        :name(pName),subjectText(pSubject) {
}

Award::Award(const Award &other)
        :name(other.getName()),subjectText(other.getText()) {
}

bool Award::setName(const string &pName) {
    if(pName.length()<=20){
        this->name=pName;
        return true;
    }
    return false;
}

string Award::getName() const {
    return name;
}

bool Award::setText(const string &pSubject) {
    if(pSubject.length()<=100){
        this->subjectText=pSubject;
        return true;
    }
    return false;
}

string Award::getText() const {
    return subjectText;
}

string Award::printToString() const {
    string ret;
    ret+=getName();
    ret+="  ||  ";
    ret+=getText();
    return ret;
}

bool Award::printToConsole() const {
    cout<<printToString()<<'\n';
    return true;
}


