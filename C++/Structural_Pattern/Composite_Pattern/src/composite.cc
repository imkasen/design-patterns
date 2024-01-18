#include "../include/composite.h"

void Composite::add(const std::shared_ptr<Component> &com_ptr) {
    this->children.push_back(com_ptr);
    com_ptr->setParent(shared_from_this());
}

void Composite::remove(const std::shared_ptr<Component> &com_ptr) {
    this->children.remove(com_ptr);
    com_ptr->setParent(nullptr);
}

void Composite::operation() const {
    for (const auto &child : children){
        child->operation();
        if (child != children.back()) {
            std::cout << "+";
        }
    }
    std::cout << std::endl;
}
