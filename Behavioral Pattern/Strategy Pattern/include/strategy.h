#ifndef STRATEGY_PATTERN_STRATEGY_H
#define STRATEGY_PATTERN_STRATEGY_H

class Strategy {
public:
    Strategy() = default;
    virtual ~Strategy() = default;

    virtual void algorithm() const = 0;
};

#endif
