#include "../include/concrete_state_a.h"
#include "../include/concrete_state_b.h"
#include "../include/context.h"

std::shared_ptr<State> ConcreteStateA::instance() {
    if (!ConcreteStateA::p_state) {
        ConcreteStateA::p_state = std::make_shared<ConcreteStateA>();
    }
    return ConcreteStateA::p_state;
}

void ConcreteStateA::handle(const std::shared_ptr<Context> &c_ptr) {
    std::cout << "doing something in State A.\n Done, change state to B" << std::endl;
    c_ptr->changeState(ConcreteStateB::instance());
}
