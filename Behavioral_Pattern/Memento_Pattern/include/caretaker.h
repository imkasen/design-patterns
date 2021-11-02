#ifndef MEMENTO_PATTERN_CARETAKER_H
#define MEMENTO_PATTERN_CARETAKER_H

#include "originator.h"
#include <vector>

class Caretaker {
private:
    std::vector<std::shared_ptr<Memento>> mementos;
    std::shared_ptr<Originator> p_originator;
public:
    Caretaker() = default;
    Caretaker(const std::shared_ptr<Originator> &originator_ptr);
    ~Caretaker() = default;

    void backup();
    void undo();
    void showHistory() const;
};

#endif
