#ifndef FACTORY_METHOD_PATTERN_FACTORY_H
#define FACTORY_METHOD_PATTERN_FACTORY_H

#include "product.h"
#include <memory>

class Factory {
public:
    virtual std::unique_ptr<Product> factoryMethod() = 0;
};

#endif
