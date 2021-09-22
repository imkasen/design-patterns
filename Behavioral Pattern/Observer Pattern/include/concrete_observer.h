#ifndef OBSERVER_PATTERN_CONCRETE_OBSERVER_H
#define OBSERVER_PATTERN_CONCRETE_OBSERVER_H

#include "observer.h"
#include <string>
#include <iostream>

class ConcreteObserver : public Observer {
private:
    std::string p_name;
    int p_state;
public:
    ConcreteObserver() = default;
    ConcreteObserver(const std::string &name);
    ~ConcreteObserver() = default;

    void update(const std::shared_ptr<Subject> &sub_ptr) override;
};

#endif
