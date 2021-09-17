#include "../include/component.h"

void Component::setParent(const std::shared_ptr<Component> &parent_ptr) {
    this->parent = parent_ptr;
}

std::shared_ptr<Component> Component::getParent() const {
    return this->parent;
}
