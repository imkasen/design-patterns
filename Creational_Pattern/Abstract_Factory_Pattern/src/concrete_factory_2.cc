#include "../include/concrete_factory_2.h"

std::unique_ptr<AbstractProductA> ConcreteFactory2::createProductA() {
    return std::make_unique<ProductA2>();
}

std::unique_ptr<AbstractProductB> ConcreteFactory2::createProductB() {
    return std::make_unique<ProductB2>();
}
