//
// Created by TKisely on 2017. 04. 24..
//

#include "Mark.h"

Mark::Mark() {

}

Mark::Mark(const string &pSubject, const unsigned pNum)
        :subject(pSubject){
    setNum(pNum);
}

void Mark::setNum(const unsigned pNum) {
    try{
        if(!(pNum>=1&&pNum<=5))throw"wrong Mark number";
        this->num=pNum;
    }
    catch(string er){
        cout<<"Error from Mark: "<<er;
    }
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
    ret+=std::to_string(getNum());
    return ret;
}

bool Mark::printToConsole() const {
    cout<< printToString()<<endl;
    return true;
}
