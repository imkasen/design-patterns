#ifndef STATE_PATTERN_CONTEXT_H
#define STATE_PATTERN_CONTEXT_H

#include "state.h"

class Context : public std::enable_shared_from_this<Context> {
private:
    std::shared_ptr<State> p_state;
public:
    Context();
    ~Context() = default;

    void changeState(const std::shared_ptr<State> &st_ptr);
    void request();
};

#endif
