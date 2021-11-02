#ifndef ABSTRACT_FACTORY_PATTERN_CONCRETE_FACTORY_1_H
#define ABSTRACT_FACTORY_PATTERN_CONCRETE_FACTORY_1_H

#include "abstract_factory.h"
#include "product_a_1.h"
#include "product_b_1.h"

class ConcreteFactory1 : public AbstractFactory {
public:
    ConcreteFactory1() = default;
    ~ConcreteFactory1() = default;

    std::unique_ptr<AbstractProductA> createProductA() override;
    std::unique_ptr<AbstractProductB> createProductB() override;
};

#endif
