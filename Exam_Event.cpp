//
// Created by TKisely on 2017. 04. 24..
//
//TODO::Exam_Event class
#include "Exam_Event.h"

unsigned Exam_Event::finishedStudentsNumber=0;

Exam_Event::~Exam_Event() {

}

Exam_Event::Exam_Event() {

}

bool Exam_Event::addAStudent(const Student &) {
    return false;
}

bool Exam_Event::addATeacher(const Teacher &) {
    return false;
}

bool Exam_Event::addTheParticipants(const unsigned, const Student *, const unsigned, const Teacher *) {
    return false;
}

bool Exam_Event::createExam(const Student &) {
    return false;
}

Student Exam_Event::getTheNextStudent() const {
    return Student();
}

Exam Exam_Event::getOngoingExam() {
    return Exam(Student());
}

bool Exam_Event::finishExam() {
    return false;
}
