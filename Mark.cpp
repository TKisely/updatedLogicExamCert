//
// Created by TKisely on 2017. 04. 24..
//

#include "Mark.h"

Mark::Mark() {

}

Mark::Mark(const string &pSubject, const unsigned pNum)
        :subject(pSubject),num(pNum) {
}

bool Mark::setNum(const unsigned pNum) {
    if(pNum>=1&&pNum<=5){
        this->num=pNum;
        return true;
    }
    return false;
}

bool Mark::setSubject(const string &pSubject) {
    this->subject=pSubject;
    return true;
}

unsigned Mark::getNum() const {
    return num;
}

string Mark::getSubject() const {
    return subject;
}

string Mark::printToString() const {
    string ret=getSubject();
    ret+="  ";
    ret+=getNum();
    return ret;
}

bool Mark::printToFile() const {
    return false;
}

bool Mark::printToConsole() const {
    return false;
}
