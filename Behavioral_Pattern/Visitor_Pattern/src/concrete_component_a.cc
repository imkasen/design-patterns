#include "../include/concrete_component_a.h"

void ConcreteComponentA::accept(const std::shared_ptr<Visitor> &visitor_ptr) {
    visitor_ptr->visitConcreteComponentA(shared_from_this());
}

std::string ConcreteComponentA::exclusiveMethodOfConcreteComponentA() const {
    return "A";
}
