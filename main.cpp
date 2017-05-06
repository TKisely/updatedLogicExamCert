#include <iostream>
#include "Person.h"
#include "Mark.h"
#include "Award.h"
#include "Teacher.h"
#include "Student.h"
#include "Place.h"
int main() {

//Only for test

    Date d(1999,11,10);
    Date d2(1965,5,7);
    Date d3(1998,6,12);
    Person pc("Kiss","Ferenc",d);
    Mark m("Physics",4);
    Award a("AwardOne","JustBecause");
    Teacher t("Nagy","Ilona",d2,"Math","11/CPSZ",54632589);
    Student s("Olasz","Aurel",d3,15632508,"9/F");
    Place pl(1222,"Budapest","Atya utca",9);


    a.printToConsole();
    m.printToConsole();
    d.printToConsole();
    pc.printToConsole();
    t.printToConsole();
    s.printToConsole();
    pl.printToConsole();

    std::cout << "Hello, World!" << std::endl;


    return 0;
}