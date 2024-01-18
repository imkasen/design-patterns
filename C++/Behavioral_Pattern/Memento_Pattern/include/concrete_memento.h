#ifndef MEMENTO_PATTERN_CONCRETE_MEMENTO_H
#define MEMENTO_PATTERN_CONCRETE_MEMENTO_H

#include "memento.h"
#include <ctime>

class ConcreteMemento : public Memento {
private:
    std::string p_state;
    std::string p_date;
public:
    ConcreteMemento() = default;
    ConcreteMemento(const std::string &state);
    ~ConcreteMemento() = default;

    std::string state() const override;
    std::string getName() const override;
    std::string date() const override;
};

#endif
