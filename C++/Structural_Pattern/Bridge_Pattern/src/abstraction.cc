#include "../include/abstraction.h"

Abstraction::Abstraction(std::unique_ptr<Implementor> &imp_ptr) {
    this->imp_ptr = std::move(imp_ptr);
}
