#ifndef SIMPLE_FACTORY_PATTERN_PRODUCT_H
#define SIMPLE_FACTORY_PATTERN_PRODUCT_H

class Product {
public:
    Product() = default;
    virtual ~Product() = default;

    virtual void use() const = 0;
};

#endif
