#ifndef ABSTRACT_FACTORY_PATTERN_ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_PATTERN_ABSTRACT_FACTORY_H

#include "abstract_product_a.h"
#include "abstract_product_b.h"
#include <memory>

class AbstractFactory {
public:
    AbstractFactory() = default;
    virtual ~AbstractFactory() = default;

    virtual std::unique_ptr<AbstractProductA> createProductA() = 0;
    virtual std::unique_ptr<AbstractProductB> createProductB() = 0;
};

#endif
