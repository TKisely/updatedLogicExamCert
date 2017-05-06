//
// Created by TKisely on 2017. 04. 24..
//
//TODO::Exam cpp
#include "Exam.h"

Exam::Exam(const Student& pStudent) {this->marks= nullptr;this->awards= nullptr;}

void Exam::addMark(const string &, unsigned) {

}

void Exam::addMark(const Mark &) {

}

void Exam::addAward(const Award &) {

}

bool Exam::deleteLastMark() {
    if(nMarks==0) return false;
}

bool Exam::deleteLastAward() {
    if(nAwards==0) return false;
}

Student* Exam::whose() const {
    return owner;
}

string Exam::printToString() const {
    return std::string();
}



bool Exam::printToConsole() const {
    return false;
}


