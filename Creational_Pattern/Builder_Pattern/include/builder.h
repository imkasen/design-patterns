#ifndef BUILDER_PATTERN_BUILDER_H
#define BUILDER_PATTERN_BUILDER_H

#include "product.h"
#include <memory>

class Builder {
protected:
    std::shared_ptr<Product> product;
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual void buildPartC() = 0;
    virtual std::shared_ptr<Product> getResult() = 0;
};

#endif
