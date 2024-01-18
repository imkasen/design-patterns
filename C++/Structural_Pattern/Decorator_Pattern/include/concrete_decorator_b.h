#ifndef DECORATOR_PATTERN_CONCRETE_DECORATOR_B_H
#define DECORATOR_PATTERN_CONCRETE_DECORATOR_B_H

#include "decorator.h"
#include <iostream>

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB() = default;
    ConcreteDecoratorB(const std::shared_ptr<Component> &com_ptr);
    ~ConcreteDecoratorB() = default;

    void operation() const override;
};

#endif
