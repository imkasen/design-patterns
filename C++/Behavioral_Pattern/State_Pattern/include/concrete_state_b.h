#ifndef STATE_PATTERN_CONCRETE_STATE_B_H
#define STATE_PATTERN_CONCRETE_STATE_B_H

#include "state.h"
#include <iostream>

class ConcreteStateB : public State {
private:
    inline static std::shared_ptr<State> p_state = nullptr;
public:
    ConcreteStateB() = default;
    ~ConcreteStateB() = default;

    static std::shared_ptr<State> instance();
    void handle(const std::shared_ptr<Context> &c_ptr) override;
};

#endif
