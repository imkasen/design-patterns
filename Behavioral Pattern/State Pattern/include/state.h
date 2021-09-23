#ifndef STATE_PATTERN_STATE_H
#define STATE_PATTERN_STATE_H

#include <memory>
class Context;

class State {
public:
    State() = default;
    virtual ~State() = default;

    virtual void handle(const std::shared_ptr<Context> &c_ptr) = 0;
};

#endif
