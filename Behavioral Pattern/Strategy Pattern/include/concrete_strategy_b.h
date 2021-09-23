#ifndef STRATEGY_PATTERN_CONCRETE_STRATEGY_B_H
#define STRATEGY_PATTERN_CONCRETE_STRATEGY_B_H

#include "strategy.h"
#include <iostream>

class ConcreteStrategyB : public Strategy {
public:
    ConcreteStrategyB() = default;
    ~ConcreteStrategyB() = default;

    void algorithm() const override;
};

#endif
