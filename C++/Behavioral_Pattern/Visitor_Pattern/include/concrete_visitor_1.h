#ifndef VISITOR_PATTERN_CONCRETE_VISITOR_1_H
#define VISITOR_PATTERN_CONCRETE_VISITOR_1_H

#include "visitor.h"
#include <iostream>

class ConcreteVisitor1 : public Visitor {
public:
    ConcreteVisitor1() = default;
    ~ConcreteVisitor1() = default;

    void visitConcreteComponentA(const std::shared_ptr<ConcreteComponentA> &cca_ptr) const override;
    void visitConcreteComponentB(const std::shared_ptr<ConcreteComponentB> &ccb_ptr) const override;
};

#endif
