#ifndef ABSTRACT_FACTORY_PATTERN_ABSTRACT_PRODUCT_A_H
#define ABSTRACT_FACTORY_PATTERN_ABSTRACT_PRODUCT_A_H

class AbstractProductA {
public:
    AbstractProductA() = default;
    virtual ~AbstractProductA() = default;

    virtual void use() const = 0;
};

#endif
