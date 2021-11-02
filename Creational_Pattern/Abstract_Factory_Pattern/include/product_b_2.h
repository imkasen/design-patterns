#ifndef ABSTRACT_FACTORY_PATTERN_PRODUCT_B_2_H
#define ABSTRACT_FACTORY_PATTERN_PRODUCT_B_2_H

#include "abstract_product_b.h"
#include <iostream>

class ProductB2 : public AbstractProductB {
public:
    ProductB2() = default;
    ~ProductB2() = default;

    void eat() const override;
};

#endif
