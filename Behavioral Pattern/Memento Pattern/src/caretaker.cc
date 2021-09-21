#include "../include/caretaker.h"

Caretaker::Caretaker(const std::shared_ptr<Originator> &originator_ptr) : p_originator(originator_ptr) {}

void Caretaker::backup() {
    std::cout << "Caretaker: Saving Originator's state..." << std::endl;
    this->mementos.push_back(this->p_originator->save());
}

void Caretaker::undo() {
    if (this->mementos.empty()) {
        return;
    }
    std::shared_ptr<Memento> memento = this->mementos.back();
    this->mementos.pop_back();
    std::cout << "Caretaker: Restoring state to: " << memento->getName() << std::endl;
    try {
        this->p_originator->restore(memento);
    } catch (...) {
        this->undo();
    }
}

void Caretaker::showHistory() const {
    std::cout << "Caretaker: Here's the list of mementos:" << std::endl;
    for (const auto &memento : this->mementos) {
        std::cout << memento->getName() << std::endl;
    }
}
