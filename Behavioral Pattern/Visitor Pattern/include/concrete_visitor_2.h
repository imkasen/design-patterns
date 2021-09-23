#ifndef VISITOR_PATTERN_CONCRETE_VISITOR_2_H
#define VISITOR_PATTERN_CONCRETE_VISITOR_2_H

#include "visitor.h"
#include <iostream>

class ConcreteVisitor2 : public Visitor {
public:
    ConcreteVisitor2() = default;
    ~ConcreteVisitor2() = default;

    void visitConcreteComponentA(const std::shared_ptr<ConcreteComponentA> &cca_ptr) const override;
    void visitConcreteComponentB(const std::shared_ptr<ConcreteComponentB> &ccb_ptr) const override;
};

#endif
