#include "../include/concrete_memento.h"

ConcreteMemento::ConcreteMemento(const std::string &state) : p_state(state) {
    std::time_t now = std::time(0);
    this->p_date = std::ctime(&now);
}

std::string ConcreteMemento::state() const {
    return this->p_state;
}

std::string ConcreteMemento::getName() const {
    return this->p_date + " / (" + this->p_state.substr(0, 9) + "...)";
}

std::string ConcreteMemento::date() const {
    return this->p_date;
}
