#include "../include/component_2.h"

void Component2::doC() {
    std::cout << "Component 2 does C." << std::endl;
    this->mediator.lock()->notify(shared_from_this(), "C");
}

void Component2::doD() {
    std::cout << "Component 2 does D." << std::endl;
    this->mediator.lock()->notify(shared_from_this(), "D");
}
