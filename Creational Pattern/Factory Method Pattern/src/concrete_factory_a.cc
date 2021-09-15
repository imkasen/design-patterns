#include "../include/concrete_factory_a.h"

std::unique_ptr<Product> ConcreteFactoryA::factoryMethod() {
    return std::make_unique<ConcreteProductA>();
}
