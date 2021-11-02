#ifndef ABSTRACT_FACTORY_PATTERN_ABSTRACT_PRODUCT_B_H
#define ABSTRACT_FACTORY_PATTERN_ABSTRACT_PRODUCT_B_H

class AbstractProductB {
public:
    AbstractProductB() = default;
    virtual ~AbstractProductB() = default;

    virtual void eat() const = 0;
};

#endif
