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

void Award::setName(const string &pName) {
    try{
    if(pName.length()>20)throw "too long subject";
        this->name=pName;
    }
    catch (string er){
        cout<<"Error from Award: "<<er;
    }



}

string Award::getName() const {
    return name;
}

void Award::setText(const string &pSubject) {

    try{
        if(pSubject.length()>100)throw "too long text";
        this->subjectText=pSubject;
    }
        catch (string er){
            cout<<"Error from Award : "<<er;
        }

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


