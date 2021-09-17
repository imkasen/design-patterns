#include "../include/concrete_decorator_a.h"

ConcreteDecoratorA::ConcreteDecoratorA(const std::shared_ptr<Component> &com_ptr) : Decorator(com_ptr) {}

void ConcreteDecoratorA::operation() const {
    std::cout << "Concrete decorator A: ";
    Decorator::operation();
}
