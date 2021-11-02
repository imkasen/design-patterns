#include "../include/originator.h"

Originator::Originator(const std::string &state) : p_state(state) {
    std::cout << "Originator: My initial state is: " << this->p_state << std::endl;
}

std::string Originator::generateRandomString(int length) {
    const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    int stringLength = sizeof(alphanum) - 1;

    std::string random_string;
    for (int i = 0; i < length; ++i) {
        random_string += alphanum[std::rand() % stringLength];
    }
    return random_string;
}

void Originator::doSomething() {
    std::cout << "Originator: I'm doing something important." << std::endl;
    this->p_state = this->generateRandomString(30);
    std::cout << "Originator: and my state has changed to: " << this->p_state << std::endl;
}

std::shared_ptr<Memento> Originator::save() {
    return std::make_shared<ConcreteMemento>(this->p_state);
}

void Originator::restore(const std::shared_ptr<Memento> &memento_ptr) {
    this->p_state = memento_ptr->state();
    std::cout << "Originator: My state has changed to: " << this->p_state << std::endl;
}
