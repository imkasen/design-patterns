#ifndef ABSTRACT_FACTORY_PATTERN_PRODUCT_A_1_H
#define ABSTRACT_FACTORY_PATTERN_PRODUCT_A_1_H

#include "abstract_product_a.h"
#include <iostream>

class ProductA1 : public AbstractProductA {
public:
    ProductA1() = default;
    ~ProductA1() = default;

    void use() const override;
};

#endif
