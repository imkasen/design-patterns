#ifndef DESIGN_PATTERNS_IMPLEMENTATION_CONCRETE_PRODUCT_B_H
#define DESIGN_PATTERNS_IMPLEMENTATION_CONCRETE_PRODUCT_B_H

#include "product.h"
#include <iostream>

class ConcreteProductB : public Product {
public:
    ConcreteProductB() = default;
    ~ConcreteProductB() = default;

    virtual void use() const final;
};

#endif
