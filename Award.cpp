//
// Created by TKisely on 2017. 04. 24..
//

#include "Award.h"
//TODO:Award.cpp fulfil
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
    return false;
}

string Award::getText() const {
    return std::string();
}

string Award::printToString() const {
    return std::string();
}

bool Award::printToFile() const {
    return false;
}

bool Award::printToConsole() const {
    return false;
}


