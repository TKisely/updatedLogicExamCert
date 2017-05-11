#include <iostream>
#include "Person.h"
#include "Mark.h"
#include "Award.h"
#include "Teacher.h"
#include "Student.h"
#include "Place.h"
#include "Exam.h"
#include "Exam_Event.h"
#include "Printer.h"
int main() {

//Only for test

 /*   Date d(1999,11,10);
    Date d2(1965,5,7);
    Date d3(1998,6,12);
    Person pc("Kiss","Ferenc",d);
    Mark m("Physics",4);
    Award a("AwardOne","JustBecause");
    Teacher t("Nagy","Ilona",d2,"Math","11/CPSZ",54632589);
    Student s("Olasz","Aurel",d3,15632508,"9/F");
    Place pl(1222,"Budapest","Atya utca",9);
    Exam e(s);
    Exam_Event exev;

    exev.addAStudent(s);
    exev.addATeacher(t);
    exev.createExam(exev.getTheNextStudent());

    Exam ev(exev.getOngoingExam());
    ev.addMark(m);
    ev.printToConsole();

    exev.getOngoingExam().addMark(m);
    exev.getOngoingExam().printToConsole();

    exev.setOngoingExam(ev);
    exev.getOngoingExam().printToConsole();

    e.addAward(a);
    e.addMark(m);

    e.printToConsole();
    a.printToConsole();
    m.printToConsole();
    d.printToConsole();
    pc.printToConsole();
    t.printToConsole();
    s.printToConsole();
    pl.printToConsole();
*/



//
//Where the real part begins
//
    Exam_Event exam_event;

    int numberOfStudents=0;
    cout<<"Please give me the number of the students"<<endl;
    cin>>numberOfStudents;
    for (int i = 0; i < numberOfStudents; ++i) {

        string firsName;
        cout<<"Please give me the first name of the "<<i+1<<". student"<<endl;
        cin>>firsName;

        string lastName;
        cout<<"Please give me the second name of the "<<i+1<<". student"<<endl;
        cin>>lastName;

        int ID;
        cout<<"Please give me the 8 numbers of the ID of the "<<i+1<<". student"<<endl;
        cin>>ID;

        string ownClass;
        cout<<"Please give me the class of the "<<i+1<<". student"<<endl;
        cin>>ownClass;

        unsigned year;
        cout<<"Please give me the year of birth of the "<<i+1<<". student"<<endl;
        cin>>year;

        unsigned month;
        cout<<"Please give me the month of birth of the "<<i+1<<". student"<<endl;
        cin>>month;

        unsigned day;
        cout<<"Please give me the day of birth of the "<<i+1<<". student"<<endl;
        cin>>day;

        Date d(year,month,day);
        Student s(firsName,lastName,d,ID,ownClass);

        exam_event.addAStudent(s);

        s.printToConsole();
    }

    int numberOfTeachers=0;
    cout<<"Please give me the number of the teachers"<<endl;
    cin>>numberOfTeachers;
    for (int i = 0; i < numberOfTeachers; ++i) {
        string firsName;
        cout<<"Please give me the first name of the "<<i+1<<". teacher"<<endl;
        cin>>firsName;

        string lastName;
        cout<<"Please give me the second name of the "<<i+1<<". teacher"<<endl;
        cin>>lastName;

        int ID;
        cout<<"Please give me the 8 numbers of the ID of the "<<i+1<<". teacher"<<endl;
        cin>>ID;

        string ownSubject;
        cout<<"Please give me the taught subject of the "<<i+1<<". teacher"<<endl;
        cin>>ownSubject;

        string ownClass;
        cout<<"Please give me the class of the "<<i+1<<". teacher"<<endl;
        cin>>ownClass;

        unsigned year;
        cout<<"Please give me the year of birth of the "<<i+1<<". teacher"<<endl;
        cin>>year;

        unsigned month;
        cout<<"Please give me the month of birth of the "<<i+1<<". teacher"<<endl;
        cin>>month;

        unsigned day;
        cout<<"Please give me the day of birth of the "<<i+1<<". teacher"<<endl;
        cin>>day;

        Date d(year,month,day);
        Teacher t(firsName,lastName,d,ownSubject,ownClass,ID);

        exam_event.addATeacher(t);

        t.printToConsole();
    }
    for (int i = 0; i <numberOfStudents ; ++i) {
        cout<<"Let's start the final exam of the "<<i+1<<" student:"<<endl;
        exam_event.createExam(exam_event.getTheNextStudent());
        Exam tempExam(exam_event.getTheNextStudent());

        string examOwnerName=exam_event.getTheNextStudent().getFirstName();
        cout<<"The "<<i+1<<". student's name is "<<examOwnerName<<endl;

        unsigned howManyMarks=0;
        cout<<"How many marks did she/he get?"<<endl;
        cin>>howManyMarks;
        for (int j = 0; j <howManyMarks ; ++j) {
            unsigned mark;
            string subject;

            cout<<"Subject of mark:"<<endl;
            cin>>subject;

            cout<<"The mark itself:"<<endl;
            cin>>mark;
            Mark m(subject, mark);
            tempExam.addMark(m);
        }

        unsigned howManyAwards=0;
        cout<<"How many awards did she/he get?"<<endl;
        cin>>howManyAwards;
        for (int k = 0; k < howManyAwards; ++k) {
            string subject,text;

            cout<<"Subject of award:"<<endl;
            cin>>subject;

            cout<<"Text of the award:"<<endl;
            cin>>text;

            Award a(subject,text);
            tempExam.addAward(a);
        }
        exam_event.setOngoingExam(tempExam);
        exam_event.getOngoingExam().printToConsole();

        //Printer::printToFile(exam_event.getOngoingExam(),examOwnerName);

        exam_event.finishExam();

    }



    cout << "ByeBye, World! I'm finished" << endl;
    return 0;
}