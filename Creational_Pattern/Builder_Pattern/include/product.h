#ifndef BUILDER_PATTERN_PRODUCT_H
#define BUILDER_PATTERN_PRODUCT_H

#include <string>
#include <iostream>

class Product {
private:
    std::string str_a;
    std::string str_b;
    std::string str_c;

public:
    Product() = default;
    ~Product() = default;

    void setA(const std::string &str);
    void setB(const std::string &str);
    void setC(const std::string &str);

    void show() const;
};

#endif
