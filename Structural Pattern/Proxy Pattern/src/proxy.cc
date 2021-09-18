#include "../include/proxy.h"

Proxy::Proxy() {
    rs_ptr = std::make_unique<RealSubject>();
}

void Proxy::preRequest() const {
    std::cout << "Proxy::preRequest()" << std::endl;
}

void Proxy::afterRequest() const {
    std::cout << "Proxy::afterRequest()" << std::endl;
}

void Proxy::request() const {
    this->preRequest();
    this->rs_ptr->request();
    this->afterRequest();
}
