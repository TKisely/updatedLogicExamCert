#include <iostream>
#include "Person.h"
int main() {
    Person p();
    Date d(1999,11,10);
    Person pc("Jani","Pisti",d);

    std::cout << pc.printToString() << std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}