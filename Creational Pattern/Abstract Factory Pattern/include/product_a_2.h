#ifndef ABSTRACT_FACTORY_PATTERN_PRODUCT_A_2_H
#define ABSTRACT_FACTORY_PATTERN_PRODUCT_A_2_H

#include "abstract_product_a.h"
#include <iostream>

class ProductA2 : public AbstractProductA {
public:
    ProductA2() = default;
    ~ProductA2() = default;

    void use() const override;
};

#endif
