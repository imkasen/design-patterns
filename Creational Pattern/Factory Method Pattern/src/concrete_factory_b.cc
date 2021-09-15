#include "../include/concrete_factory_b.h"

std::unique_ptr<Product> ConcreteFactoryB::factoryMethod() {
    return std::make_unique<ConcreteProductB>();
}
