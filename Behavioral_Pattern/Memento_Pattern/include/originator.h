#ifndef MEMENTO_PATTERN_ORIGINATOR_H
#define MEMENTO_PATTERN_ORIGINATOR_H

#include "concrete_memento.h"
#include <string>
#include <cstdlib>
#include <memory>
#include <iostream>

class Originator {
private:
    std::string p_state;
    std::string generateRandomString(int length = 10);
public:
    Originator() = default;
    Originator(const std::string &state);
    ~Originator() = default;

    void doSomething();
    std::shared_ptr<Memento> save();
    void restore(const std::shared_ptr<Memento> &memento_ptr);
};

#endif
