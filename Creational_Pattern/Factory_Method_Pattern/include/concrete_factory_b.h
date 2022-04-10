#ifndef FACTORY_METHOD_PATTERN_CONCRETE_FACTORY_B_H
#define FACTORY_METHOD_PATTERN_CONCRETE_FACTORY_B_H

#include "factory.h"
#include "concrete_product_b.h"

class ConcreteFactoryB : public Factory {
public:
    ConcreteFactoryB() = default;
    ~ConcreteFactoryB() = default;

    std::unique_ptr<Product> factoryMethod() override;
};

#endif
