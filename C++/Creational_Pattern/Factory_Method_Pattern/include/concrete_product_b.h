#ifndef FACTORY_METHOD_PATTERN_CONCRETE_PRODUCT_B_H
#define FACTORY_METHOD_PATTERN_CONCRETE_PRODUCT_B_H

#include "product.h"
#include <iostream>

class ConcreteProductB : public Product {
public:
    void use() const override;
};

#endif
