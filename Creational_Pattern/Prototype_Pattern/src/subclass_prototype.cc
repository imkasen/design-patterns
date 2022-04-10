#include "../include/subclass_prototype.h"

SubclassPrototype::SubclassPrototype(const std::string &field) : ConcretePrototype(field) {}
SubclassPrototype::SubclassPrototype(const std::shared_ptr<Prototype> &prototype) : ConcretePrototype(prototype) {}

std::shared_ptr<Prototype> SubclassPrototype::clone() {
    return std::make_shared<SubclassPrototype>(shared_from_this());
}

void SubclassPrototype::show() const {
    std::cout << "SubclassPrototype field: " << field << std::endl;
}
