//
// Created by TKisely on 2017. 04. 24..
//

#include "Exam.h"

Exam::Exam(const Student& pStudent) {this->marks= nullptr;this->awards= nullptr;}

void Exam::addMark(const string &, unsigned) {

}

void Exam::addMark(const Mark &) {

}

void Exam::addAward(const Award &) {

}

bool Exam::deleteLastMark() {
    return false;
}

bool Exam::deleteLastAward() {
    return false;
}

Student Exam::whose() const {
    return Student();
}

string Exam::printToString() const {
    return std::string();
}

bool Exam::printToFile() const {
    return false;
}

bool Exam::printToConsole() const {
    return false;
}


