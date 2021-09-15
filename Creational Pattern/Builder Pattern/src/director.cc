#include "../include/director.h"

std::shared_ptr<Product> Director::construct() {
    this->builder->buildPartA();
    this->builder->buildPartB();
    this->builder->buildPartC();

    return this->builder->getResult();
}

void Director::setBuilder(std::shared_ptr<Builder> builder_ptr) {
    this->builder = builder_ptr;
}
