#ifndef ABSTRACT_FACTORY_PATTERN_CONCRETE_FACTORY_2_H
#define ABSTRACT_FACTORY_PATTERN_CONCRETE_FACTORY_2_H

#include "abstract_factory.h"
#include "product_a_2.h"
#include "product_b_2.h"

class ConcreteFactory2 : public AbstractFactory {
public:
    ConcreteFactory2() = default;
    ~ConcreteFactory2() = default;

    std::unique_ptr<AbstractProductA> createProductA() override;
    std::unique_ptr<AbstractProductB> createProductB() override;
};

#endif
