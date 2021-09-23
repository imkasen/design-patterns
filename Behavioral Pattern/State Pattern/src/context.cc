#include "../include/context.h"
#include "../include/concrete_state_a.h"

Context::Context() {
    this->p_state = ConcreteStateA::instance();
}

void Context::changeState(const std::shared_ptr<State> &st_ptr) {
    this->p_state = st_ptr;
}

void Context::request() {
    this->p_state->handle(shared_from_this());
}
