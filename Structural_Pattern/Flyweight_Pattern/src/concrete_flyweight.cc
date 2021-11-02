#include "../include/concrete_flyweight.h"

ConcreteFlyweight::ConcreteFlyweight(std::string state) : intrinsic_state(state) {}

void ConcreteFlyweight::operation() const {
    std::cout << "Concrete flyweight: " << this->intrinsic_state << " do operation." << std::endl;
}
