//
// Created by TKisely on 2017. 04. 24..
//
#include "Exam.h"

Exam::Exam(const Student &pStudent):nMarks(0),nAwards(0) {
    marks= nullptr;
    awards= nullptr;
    this->owner=pStudent;
}

void Exam::addMark(const string &pSubject,const unsigned pMark) {
    Mark *temp=new Mark[nMarks+1];
    Mark tMark(pSubject,pMark);
    for (int i = 0; i < nMarks; ++i) {
        temp[i]=marks[i];
    }
    temp[nMarks]=tMark;
    if(nMarks!=0)delete[]marks;
    marks=temp;
    nMarks++;
}

void Exam::addMark(const Mark &pMark) {
    Mark *temp=new Mark[nMarks+1];
    for (int i = 0; i < nMarks; ++i) {
        temp[i]=marks[i];
    }
    temp[nMarks]=pMark;
    if(nMarks!=0)delete[] marks;
    marks=temp;
    nMarks++;
}

void Exam::addAward(const Award &pAward) {
    Award *temp=new Award[nAwards+1];
    for (int i = 0; i < nAwards; ++i) {
        temp[i]=awards[i];
    }
    temp[nAwards]=pAward;
    if(nAwards!=0)delete[] awards;
    awards=temp;
    nAwards++;
}

bool Exam::deleteLastMark() {
    if(nMarks==0) return false;
}

bool Exam::deleteLastAward() {
    if(nAwards==0) return false;
}

Student Exam::whose() const {
    return owner;
}

string Exam::printToString() const {
    string ret;
    ret=whose().printToString();
    ret+='\n';
    ret+="Marks: \n";
    for (int i = 0; i < nMarks; ++i) {
        ret+=marks[i].printToString();
        ret+='\n';
    }
    ret+="Awards: \n";
    for (int j = 0; j < nAwards; ++j) {
        ret+=awards[j].printToString();
        ret+='\n';
    }
    return ret;
}



bool Exam::printToConsole() const {
    cout<<printToString()<<endl;
}

Exam::Exam():nAwards(0),nMarks(0) {
    marks= nullptr;
    awards= nullptr;

}


