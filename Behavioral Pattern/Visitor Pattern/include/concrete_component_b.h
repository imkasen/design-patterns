#ifndef VISITOR_PATTERN_CONCRETE_COMPONENT_B_H
#define VISITOR_PATTERN_CONCRETE_COMPONENT_B_H

#include "component.h"
#include <memory>
#include <string>

class ConcreteComponentB : public Component, public std::enable_shared_from_this<ConcreteComponentB> {
public:
    ConcreteComponentB() = default;
    ~ConcreteComponentB() = default;

    void accept(const std::shared_ptr<Visitor> &visitor_ptr) override;
    std::string specialMethodOfConcreteComponentB() const;
};

#endif
