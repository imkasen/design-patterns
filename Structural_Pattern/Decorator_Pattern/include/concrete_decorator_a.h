#ifndef DECORATOR_PATTERN_CONCRETE_DECORATOR_A_H
#define DECORATOR_PATTERN_CONCRETE_DECORATOR_A_H

#include "decorator.h"
#include <iostream>

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA() = default;
    ConcreteDecoratorA(const std::shared_ptr<Component> &com_ptr);
    ~ConcreteDecoratorA() = default;

    void operation() const override;
};

#endif
