#ifndef SIMPLE_FACTORY_PATTERN_CONCRETE_PRODUCT_B_H
#define SIMPLE_FACTORY_PATTERN_CONCRETE_PRODUCT_B_H

#include "product.h"
#include <iostream>

class ConcreteProductB : public Product {
public:
    ConcreteProductB() = default;
    ~ConcreteProductB() = default;

    void use() const override;
};

#endif
