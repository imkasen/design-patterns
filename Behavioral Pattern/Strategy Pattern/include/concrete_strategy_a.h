#ifndef STRATEGY_PATTERN_CONCRETE_STRATEGY_A_H
#define STRATEGY_PATTERN_CONCRETE_STRATEGY_A_H

#include "strategy.h"
#include <iostream>

class ConcreteStrategyA : public Strategy {
public:
    ConcreteStrategyA() = default;
    ~ConcreteStrategyA() = default;

    void algorithm() const override;
};

#endif
