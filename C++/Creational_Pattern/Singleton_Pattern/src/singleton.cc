#include "../include/singleton.h"

std::shared_ptr<Singleton> Singleton::getInstance(){
    if (!instance) { // == nullptr
        instance = std::make_shared<Singleton>();
    }
    return instance;
}

void Singleton::singletonOperation() const {
    std::cout << "Singleton Operation." << std::endl;
}
