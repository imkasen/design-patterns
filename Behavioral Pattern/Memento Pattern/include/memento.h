#ifndef MEMENTO_PATTERN_MEMENTO_H
#define MEMENTO_PATTERN_MEMENTO_H

#include <string>

class Memento {
public:
    Memento() = default;
    virtual ~Memento() = default;

    virtual std::string getName() const = 0;
    virtual std::string date() const = 0;
    virtual std::string state() const = 0;
};

#endif
