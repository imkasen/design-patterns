#include "../include/concrete_observer.h"

ConcreteObserver::ConcreteObserver(const std::string &name) : p_name(name) {}

void ConcreteObserver::update(const std::shared_ptr<Subject> &sub_ptr) {
    this->p_state = sub_ptr->getState();
    std::cout << "Update oberserver[" << this->p_name << "] state: " << this->p_state << std::endl;
} 
