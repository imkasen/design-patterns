#include "../include/component_1.h"

void Component1::doA() {
    std::cout << "Component 1 does A." << std::endl;
    this->mediator->notify(shared_from_this(), "A");
}

void Component1::doB() {
    std::cout << "Component 1 does B." << std::endl;
    this->mediator->notify(shared_from_this(), "B");
}
