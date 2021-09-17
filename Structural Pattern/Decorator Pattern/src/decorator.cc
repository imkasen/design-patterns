#include "../include/decorator.h"

Decorator::Decorator(const std::shared_ptr<Component> &com_ptr) : component(com_ptr) {}

void Decorator::operation() const {
    this->component->operation();
}
