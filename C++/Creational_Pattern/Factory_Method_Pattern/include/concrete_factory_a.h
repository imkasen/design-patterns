#ifndef FACTORY_METHOD_PATTERN_CONCRETE_FACTORY_A_H
#define FACTORY_METHOD_PATTERN_CONCRETE_FACTORY_A_H

#include "factory.h"
#include "concrete_product_a.h"

class ConcreteFactoryA : public Factory {
public:
    std::unique_ptr<Product> factoryMethod() override;
};

#endif
