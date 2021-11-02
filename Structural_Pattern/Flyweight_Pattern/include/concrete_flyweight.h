#ifndef FLYWEIGHT_PATTERN_CONCRETE_FLYWEIGHT_H
#define FLYWEIGHT_PATTERN_CONCRETE_FLYWEIGHT_H

#include "flyweight.h"
#include <string>
#include <iostream>

class ConcreteFlyweight : public Flyweight {
private:
    std::string intrinsic_state;
public:
    ConcreteFlyweight() = default;
    ConcreteFlyweight(std::string state);
    ~ConcreteFlyweight() = default;

    void operation() const override;
};

#endif