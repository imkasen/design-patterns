#include "../include/concrete_prototype.h"

ConcretePrototype::ConcretePrototype(const std::string &field) : Prototype(field) {}
ConcretePrototype::ConcretePrototype(const std::shared_ptr<Prototype> &prototype) : Prototype(prototype) {}

std::shared_ptr<Prototype> ConcretePrototype::clone() {
    return std::make_shared<ConcretePrototype>(shared_from_this());
}

void ConcretePrototype::show() const {
    std::cout << "ConcretePrototype field: " << field << std::endl;
}
