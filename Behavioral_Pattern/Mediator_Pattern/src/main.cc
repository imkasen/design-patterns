#include "../include/concrete_mediator.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Component1> com1_ptr = std::make_shared<Component1>();
    std::shared_ptr<Component2> com2_ptr = std::make_shared<Component2>();
    std::shared_ptr<ConcreteMediator> cm_ptr = std::make_shared<ConcreteMediator>(com1_ptr, com2_ptr);
    cm_ptr->setMediators();
    com1_ptr->doA();
    com2_ptr->doD();

    return 0;
}
