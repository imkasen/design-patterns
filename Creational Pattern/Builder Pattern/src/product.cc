#include "../include/product.h"

void Product::setA(const std::string &str) {
    this->str_a = str;
}

void Product::setB(const std::string &str) {
    this->str_b = str;
}

void Product::setC(const std::string &str) {
    this->str_c = str;
}

void Product::show() const {
    std::cout << "Product has: " << this->str_a << ", " << this->str_b << ", " << this->str_c << std::endl;
}
