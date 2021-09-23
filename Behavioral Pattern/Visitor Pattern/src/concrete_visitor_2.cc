#include "../include/concrete_visitor_2.h"
#include "../include/concrete_component_a.h"
#include "../include/concrete_component_b.h"

void ConcreteVisitor2::visitConcreteComponentA(const std::shared_ptr<ConcreteComponentA> &cca_ptr) const {
    std::cout << cca_ptr->exclusiveMethodOfConcreteComponentA() << " + ConcreteVisitor2" << std::endl;
}

void ConcreteVisitor2::visitConcreteComponentB(const std::shared_ptr<ConcreteComponentB> &ccb_ptr) const {
    std::cout << ccb_ptr->specialMethodOfConcreteComponentB() << " + ConcreteVisitor2" << std::endl;
}

