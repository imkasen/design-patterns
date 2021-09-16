#ifndef BRIDGE_PATTERN_CONCRETE_IMPLEMENTOR_B_H
#define BRIDGE_PATTERN_CONCRETE_IMPLEMENTOR_B_H

#include "implementor.h"
#include <iostream>

class ConcreteImplementorB : public Implementor {
public:
    ConcreteImplementorB() = default;
    ~ConcreteImplementorB() = default;

    void operationImp() const override;
};

#endif
