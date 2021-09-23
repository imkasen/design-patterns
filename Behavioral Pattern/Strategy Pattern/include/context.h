#ifndef STRATEGY_PATTERN_CONTEXT_H
#define STRATEGY_PATTERN_CONTEXT_H

#include "strategy.h"
#include <memory>

class Context {
private:
    std::shared_ptr<Strategy> p_strategy;
public:
    Context() = default;
    ~Context() = default;

    void algorithm() const;
    void setStrategy(const std::shared_ptr<Strategy> &st_ptr);
};

#endif
