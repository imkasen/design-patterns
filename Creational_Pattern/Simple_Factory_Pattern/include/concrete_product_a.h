#ifndef SIMPLE_FACTORY_PATTERN_CONCRETE_PRODUCT_A_H
#define SIMPLE_FACTORY_PATTERN_CONCRETE_PRODUCT_A_H

#include "product.h"
#include <iostream>

class ConcreteProductA : public Product {
public:
    void use() const override;
};

#endif
