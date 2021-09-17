#include "../include/concrete_decorator_b.h"

ConcreteDecoratorB::ConcreteDecoratorB(const std::shared_ptr<Component> &com_ptr) : Decorator(com_ptr) {}

void ConcreteDecoratorB::operation() const {
    std::cout << "Concrete decorator B: ";
    Decorator::operation();
}
