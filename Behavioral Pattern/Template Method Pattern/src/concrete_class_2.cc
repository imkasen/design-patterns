#include "../include/concrete_class_2.h"

void ConcreteClass2::requiredOperation1() const {
    std::cout << "ConcreteClass2 says: Implemented Operation1" << std::endl;
}

void ConcreteClass2::requiredOperation2() const {
    std::cout << "ConcreteClass2 says: Implemented Operation2" << std::endl;
}

void ConcreteClass2::hook1() const {
    std::cout << "ConcreteClass2 says: Overridden Hook1" << std::endl;
}
