#ifndef FACTORY_METHOD_PATTERN_CONCRETE_PRODUCT_A_H
#define FACTORY_METHOD_PATTERN_CONCRETE_PRODUCT_A_H

#include "product.h"
#include <iostream>

class ConcreteProductA : public Product {
public:
    ConcreteProductA() = default;
    ~ConcreteProductA() = default;

    void use() const override;
};

#endif
