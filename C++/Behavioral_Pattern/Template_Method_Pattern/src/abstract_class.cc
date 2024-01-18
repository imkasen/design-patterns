#include "../include/abstract_class.h"

void AbstractClass::templateMethod() const {
    this->baseOperation1();
    this->requiredOperation1();
    this->baseOperation2();
    this->hook1();
    this->requiredOperation2();
    this->baseOperation3();
    this->hook2();
}

void AbstractClass::baseOperation1() const {
    std::cout << "AbstractClass says: I am doing the bulk of the work" << std::endl;
}

void AbstractClass::baseOperation2() const {
    std::cout << "AbstractClass says: But I let subclasses override some operations" << std::endl;
}

void AbstractClass::baseOperation3() const {
    std::cout << "AbstractClass says: But I am doing the bulk of the work anyway" << std::endl;
}

void AbstractClass::hook1() const {}
void AbstractClass::hook2() const {}
