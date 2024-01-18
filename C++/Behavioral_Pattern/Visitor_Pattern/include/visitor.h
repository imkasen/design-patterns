#ifndef VISITOR_PATTERN_VISITOR_H
#define VISITOR_PATTERN_VISITOR_H

class ConcreteComponentA;
class ConcreteComponentB;
#include <memory>

class Visitor {
public:
    Visitor() = default;
    virtual ~Visitor() = default;

    virtual void visitConcreteComponentA(const std::shared_ptr<ConcreteComponentA> &cca_ptr) const = 0;
    virtual void visitConcreteComponentB(const std::shared_ptr<ConcreteComponentB> &ccb_ptr) const = 0;
};

#endif
