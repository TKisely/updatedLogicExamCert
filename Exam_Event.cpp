//
// Created by TKisely on 2017. 04. 24..
//
#include "Exam_Event.h"

unsigned Exam_Event::finishedStudentsNumber=0;

Exam_Event::~Exam_Event() {
    delete[] exams;
    delete[] students;
    delete[] teachers;
}

Exam_Event::Exam_Event():nExams(0),nStudents(0),nTeachers(0),nParticipants(0) {
    exams= nullptr;
    students= nullptr;
    teachers= nullptr;
}

bool Exam_Event::addAStudent(const Student &pStudent) {
    Student *temp=new Student[nStudents+1];
    for (int i = 0; i < nStudents; ++i) {
        temp[i]=students[i];
    }
    temp[nStudents]=pStudent;
    if(nStudents!=0) delete[] students;
    students=temp;
    nStudents++;
    nParticipants++;
    return true;
}

bool Exam_Event::addATeacher(const Teacher &pTeacher) {
    Teacher *temp=new Teacher[nTeachers+1];
    for (int i = 0; i < nTeachers; ++i) {
        temp[i]=teachers[i];
    }
    temp[nTeachers]=pTeacher;
    if(nTeachers!=0)delete[]teachers;
    teachers=temp;
    nTeachers++;
    nParticipants++;
    return true;
}

bool Exam_Event::addTheParticipants(const unsigned pNumStudents, const Student *pStudents, const unsigned pNumTeachers, const Teacher *pTeachers) {
    if(nStudents!=0){
        delete[]students;
        nStudents=0;
    }
    if(nTeachers!=0){
        delete[]teachers;
        nTeachers=0;
    }
    Student *tempSt=new Student[pNumStudents];
    for (int i = 0; i < pNumStudents; ++i) {
        tempSt[i]=pStudents[i];
    }
    students=tempSt;

    Teacher *tempT=new Teacher[pNumTeachers];
    for (int j = 0; j < pNumTeachers; ++j) {
        tempT[j]=pTeachers[j];
    }
    teachers=tempT;

    nStudents=pNumStudents;
    nTeachers=pNumTeachers;
    nParticipants=nStudents+nTeachers;
    return true;
}

bool Exam_Event::createExam(const Student &pStudent) {
    Exam tempExam(pStudent);
    Exam *tempExamsList=new Exam[nExams+1];
    for (int i = 0; i < nExams; ++i) {
        tempExamsList[i]=exams[i];
    }
    tempExamsList[nExams]=tempExam;
    if(nExams!=0)delete[] exams;
    exams=tempExamsList;
    nExams++;
    return true;
}

Student Exam_Event::getTheNextStudent() const {
    return students[finishedStudentsNumber];
}

Exam Exam_Event::getOngoingExam() {
    return exams[finishedStudentsNumber];
}

bool Exam_Event::finishExam() {
    finishedStudentsNumber++;
    return true;
}

bool Exam_Event::setOngoingExam(const Exam &pExam) {
    Exam *temp=new Exam[finishedStudentsNumber+1];
    for (int i = 0; i < finishedStudentsNumber; ++i) {
        temp[i]=exams[i];
    }
    temp[finishedStudentsNumber]=pExam;
    if(finishedStudentsNumber!=0)delete[]exams;
    exams=temp;
}

unsigned Exam_Event::getNumberOfParticipants() const {
    return nParticipants;
}

unsigned Exam_Event::getNumberOfTeachers() const {
    return nTeachers;
}

unsigned Exam_Event::getNumberOfStudents() const {
    return nStudents;
}
