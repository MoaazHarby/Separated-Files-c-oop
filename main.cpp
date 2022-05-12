#include <iostream>
#include "Rectangle.h"
using namespace std;
// separating Specification from  implementation
// Inline member functions
// Constructors


int main() {
    Rectangle otherrect{}; // FROM IDE, it's preferred to put {} to initialize the object
    otherrect.setWidth(10);
    otherrect.setLength(15);
    cout << otherrect.getWidth() << endl;
    cout << otherrect.getLength() << endl;
    cout << otherrect.getArea() << endl;
    Rectangle *rectPtr{}; // just like any other pointer from any built in datatype
    rectPtr = &otherrect;
    (*rectPtr).setWidth(20);
    rectPtr->setLength(30);
    cout << otherrect.getWidth() << endl;
    cout << otherrect.getLength() << endl;
    cout << otherrect.getArea() << endl;
    cout << (*rectPtr).getLength() << endl;
    cout << rectPtr->getArea() << endl;
    Rectangle ex1(16,18);
    cout << ex1.getaxis1() << endl;
    cout << ex1.getaxis2() << endl;
    delete rectPtr;
    rectPtr = nullptr; // FROM the IDE (0 = nullptr)
    return 0;
}
