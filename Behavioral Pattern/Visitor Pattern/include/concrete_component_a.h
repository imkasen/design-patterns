#ifndef VISITOR_PATTERN_CONCRETE_COMPONENT_A_H
#define VISITOR_PATTERN_CONCRETE_COMPONENT_A_H

#include "component.h"
#include <memory>
#include <string>

class ConcreteComponentA : public Component, public std::enable_shared_from_this<ConcreteComponentA> {
public:
    ConcreteComponentA() = default;
    ~ConcreteComponentA() = default;

    void accept(const std::shared_ptr<Visitor> &visitor_ptr) override;
    std::string exclusiveMethodOfConcreteComponentA() const;
};

#endif
