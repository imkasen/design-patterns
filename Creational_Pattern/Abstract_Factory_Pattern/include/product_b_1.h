#ifndef ABSTRACT_FACTORY_PATTERN_PRODUCT_B_1_H
#define ABSTRACT_FACTORY_PATTERN_PRODUCT_B_1_H

#include "abstract_product_b.h"
#include <iostream>

class ProductB1 : public AbstractProductB {
public:
    ProductB1() = default;
    ~ProductB1() = default;

    void eat() const override;
};

#endif
