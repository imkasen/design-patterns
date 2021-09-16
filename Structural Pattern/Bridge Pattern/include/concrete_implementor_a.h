#ifndef BRIDGE_PATTERN_CONCRETE_IMPLEMENTOR_A_H
#define BRIDGE_PATTERN_CONCRETE_IMPLEMENTOR_A_H

#include "implementor.h"
#include <iostream>

class ConcreteImplementorA : public Implementor {
public:
    ConcreteImplementorA() = default;
    ~ConcreteImplementorA() = default;

    void operationImp() const override;
}; 

#endif
