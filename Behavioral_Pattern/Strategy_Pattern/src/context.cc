#include "../include/context.h"
#include <iostream>

void Context::algorithm() const {
    this->p_strategy->algorithm();
}

void Context::setStrategy(const std::shared_ptr<Strategy> &st_ptr) {
    this->p_strategy = st_ptr;
}
