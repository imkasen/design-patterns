#ifndef DECORATOR_PATTERN_CONCRETE_COMPONENT_H
#define DECORATOR_PATTERN_CONCRETE_COMPONENT_H

#include "component.h"
#include <iostream>

class ConcreteComponent : public Component {
public:
    ConcreteComponent() = default;
    ~ConcreteComponent() = default;

    void operation() const override;
};

#endif
