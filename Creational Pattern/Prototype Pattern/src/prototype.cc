#include "../include/prototype.h"

Prototype::Prototype(std::string field) : field(field) {}

Prototype::Prototype(std::shared_ptr<Prototype> prototype) {
    this->field = prototype->field;
}
