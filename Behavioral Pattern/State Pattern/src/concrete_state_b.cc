#include "../include/concrete_state_a.h"
#include "../include/concrete_state_b.h"
#include "../include/context.h"

std::shared_ptr<State> ConcreteStateB::instance() {
    if (!ConcreteStateB::p_state) {
        ConcreteStateB::p_state = std::make_shared<ConcreteStateB>();
    }
    return ConcreteStateB::p_state;
}

void ConcreteStateB::handle(const std::shared_ptr<Context> &c_ptr) {
    std::cout << "doing something in State B.\n Done, change state to A" << std::endl;
    c_ptr->changeState(ConcreteStateA::instance());
}
