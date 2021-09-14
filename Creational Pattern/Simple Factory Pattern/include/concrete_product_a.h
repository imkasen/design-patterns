#ifndef DESIGN_PATTERNS_IMPLEMENTATION_CONCRETE_PRODUCT_A_H
#define DESIGN_PATTERNS_IMPLEMENTATION_CONCRETE_PRODUCT_A_H

#include "product.h"
#include <iostream>

class ConcreteProductA : public Product {
public:
    ConcreteProductA() = default;
    ~ConcreteProductA() = default;

    virtual void use() const final;
};

#endif
