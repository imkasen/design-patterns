#include "../include/facade.h"

Facade::Facade() {
    sys_a_ptr = std::make_unique<SystemA>();
    sys_b_ptr = std::make_unique<SystemB>();
    sys_c_ptr = std::make_unique<SystemC>();
}

void Facade::wrapOperation() const {
    sys_a_ptr->operationA();
    sys_b_ptr->operationB();
    sys_c_ptr->operationC();
}
