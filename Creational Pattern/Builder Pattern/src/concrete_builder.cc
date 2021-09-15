#include "../include/concrete_builder.h"

ConcreteBuilder::ConcreteBuilder() {
    this->product = std::make_shared<Product>();
}

void ConcreteBuilder::buildPartA() {
    this->product->setA("A style");
}

void ConcreteBuilder::buildPartB() {
    this->product->setB("B style");
}

void ConcreteBuilder::buildPartC() {
    this->product->setC("C style");
}

std::shared_ptr<Product> ConcreteBuilder::getResult() {
    return this->product;
}
