#include "../include/prototype.h"

Prototype::Prototype(const std::string &field) : field(field) {}

Prototype::Prototype(const std::shared_ptr<Prototype> &prototype) {
    this->field = prototype->field;
}
