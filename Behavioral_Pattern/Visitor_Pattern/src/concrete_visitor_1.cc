#include "../include/concrete_visitor_1.h"
#include "../include/concrete_component_a.h"
#include "../include/concrete_component_b.h"

void ConcreteVisitor1::visitConcreteComponentA(const std::shared_ptr<ConcreteComponentA> &cca_ptr) const {
    std::cout << cca_ptr->exclusiveMethodOfConcreteComponentA() << " + ConcreteVisitor1" << std::endl;
}

void ConcreteVisitor1::visitConcreteComponentB(const std::shared_ptr<ConcreteComponentB> &ccb_ptr) const {
    std::cout << ccb_ptr->specialMethodOfConcreteComponentB() << " + ConcreteVisitor1" << std::endl;
}
