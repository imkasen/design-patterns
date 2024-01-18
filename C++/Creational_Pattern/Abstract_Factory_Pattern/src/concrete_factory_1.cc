#include "../include/concrete_factory_1.h"

std::unique_ptr<AbstractProductA> ConcreteFactory1::createProductA() {
    return std::make_unique<ProductA1>();
}

std::unique_ptr<AbstractProductB> ConcreteFactory1::createProductB() {
    return std::make_unique<ProductB1>();
}
