#ifndef FACTORY_METHOD_PATTERN_PRODUCT_H
#define FACTORY_METHOD_PATTERN_PRODUCT_H

class Product {
public:
    Product() = default;
    virtual ~Product() = default;

    virtual void use() const = 0;
};

#endif
