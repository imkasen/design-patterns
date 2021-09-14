#ifndef DESIGN_PATTERNS_IMPLEMENTATION_FACTORY_H
#define DESIGN_PATTERNS_IMPLEMENTATION_FACTORY_H

#include "product.h"
#include "concrete_product_a.h"
#include "concrete_product_b.h"
#include <string>
#include <memory>

class Factory {
public:
    Factory() = default;
    ~Factory() = default;

    std::unique_ptr<Product> createProduct(std::string pro_name);
};

#endif
