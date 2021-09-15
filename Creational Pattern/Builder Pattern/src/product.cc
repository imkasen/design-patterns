#include "../include/product.h"

void Product::setA(std::string str) {
    this->str_a = str;
}

void Product::setB(std::string str) {
    this->str_b = str;
}

void Product::setC(std::string str) {
    this->str_c = str;
}

void Product::show() const {
    std::cout << "Product has: " << this->str_a << ", " << this->str_b << ", " << this->str_c << std::endl;
}
