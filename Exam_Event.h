//
// Created by TKisely on 2017. 04. 24..
//

#ifndef UPDATEDLOGICEXAMCERT_EXAM_EVENT_H
#define UPDATEDLOGICEXAMCERT_EXAM_EVENT_H

//TODO::Exam_Event header finalize
#include "Base_Event.h"
#include "Exam.h"
#include "Student.h"
#include "Teacher.h"

class Exam_Event:public Base_Event {
private:
    Exam* exams;
    Student* students;
    Teacher* teachers;

    unsigned nExams;
    unsigned nStudents;
    unsigned nTeachers;
    unsigned nParticipants;

    static unsigned finishedStudentsNumber;


public:

    Exam_Event();
    ~Exam_Event();

    bool addAStudent(const Student&);
    bool addATeacher(const Teacher&);
    bool addTheParticipants(const unsigned,const Student*,const unsigned,const Teacher*);
    bool createExam(const Student&);
    bool setOngoingExam(const Exam&);
    Student getTheNextStudent()const;
    Exam getOngoingExam();
    unsigned getNumberOfParticipants()const;
    unsigned getNumberOfTeachers()const;
    unsigned getNumberOfStudents()const;
    bool finishExam();
};


#endif //UPDATEDLOGICEXAMCERT_EXAM_EVENT_H
