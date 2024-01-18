#include "../include/adapter.h"

Adapter::Adapter(std::unique_ptr<Adaptee> &adaptee) {
    this->adaptee = std::move(adaptee);
}

void Adapter::request() const {
    this->adaptee->specificRequest();
}
