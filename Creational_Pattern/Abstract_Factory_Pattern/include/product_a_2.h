#ifndef ABSTRACT_FACTORY_PATTERN_PRODUCT_A_2_H
#define ABSTRACT_FACTORY_PATTERN_PRODUCT_A_2_H

#include "abstract_product_a.h"
#include <iostream>

class ProductA2 : public AbstractProductA {
public:
    void use() const override;
};

#endif
