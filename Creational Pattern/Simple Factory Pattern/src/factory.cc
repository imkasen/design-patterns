#include "../include/factory.h"

std::unique_ptr <Product> Factory::createProduct(std::string pro_name) {
    if ("A" == pro_name) {
        return std::make_unique<ConcreteProductA>();
    } else if ("B" == pro_name) {
        return std::make_unique<ConcreteProductB>();
    } else {
        return nullptr;
    }
}
