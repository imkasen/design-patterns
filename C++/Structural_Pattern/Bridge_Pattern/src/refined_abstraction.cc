#include "../include/refined_abstraction.h"

RefinedAbstraction::RefinedAbstraction(std::unique_ptr<Implementor> &imp_ptr) : Abstraction(imp_ptr) {}

void RefinedAbstraction::operation() const {
    std::cout << "operation() in RefinedAbstraction" << std::endl;
    this->imp_ptr->operationImp();
}
