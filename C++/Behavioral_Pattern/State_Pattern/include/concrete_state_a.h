#ifndef STATE_PATTERN_CONCRETE_STATE_A_H
#define STATE_PATTERN_CONCRETE_STATE_A_H

#include "state.h"
#include <iostream>

class ConcreteStateA : public State {
private:
    inline static std::shared_ptr<State> p_state = nullptr;
public:
    ConcreteStateA() = default;
    ~ConcreteStateA() = default;

    static std::shared_ptr<State> instance();
    void handle(const std::shared_ptr<Context> &c_ptr) override;
};

#endif
