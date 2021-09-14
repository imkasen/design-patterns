#ifndef DESIGN_PATTERNS_IMPLEMENTATION_PRODUCT_H
#define DESIGN_PATTERNS_IMPLEMENTATION_PRODUCT_H

class Product {
public:
    Product() = default;
    ~Product() = default;

    virtual void use() const = 0;
};

#endif
