#include "../include/concrete_component_b.h"

void ConcreteComponentB::accept(const std::shared_ptr<Visitor> &visitor_ptr) {
    visitor_ptr->visitConcreteComponentB(shared_from_this());
}

std::string ConcreteComponentB::specialMethodOfConcreteComponentB() const {
    return "B";
}
