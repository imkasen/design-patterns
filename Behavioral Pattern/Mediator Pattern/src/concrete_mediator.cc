#include "../include/concrete_mediator.h"

ConcreteMediator::ConcreteMediator(const std::shared_ptr<Component1> &com1_ptr, 
    const std::shared_ptr<Component2> &com2_ptr) : component1(com1_ptr), component2(com2_ptr) {}

void ConcreteMediator::setMediators() {
    this->component1->setMediator(shared_from_this());
    this->component2->setMediator(shared_from_this());
}

void ConcreteMediator::notify(const std::shared_ptr<BaseComponent> &sender, 
    const std::string &event) {
    if (event == "A") {
        std::cout << "Mediator reacts on A and triggers following operations:" << std::endl;
        this->component2->doC();
    }
    if (event == "D") {
        std::cout << "Mediator reacts on D and triggers following operations" << std::endl;
        this->component1->doB();
        this->component2->doC();
    }
}
