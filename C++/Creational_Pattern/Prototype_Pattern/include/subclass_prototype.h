#ifndef PROTOTYPE_PATTERN_SUBCLASS_PROTOTYPE_H
#define PROTOTYPE_PATTERN_SUBCLASS_PROTOTYPE_H

#include "concrete_prototype.h"

class SubclassPrototype : public ConcretePrototype {
public:
    SubclassPrototype(const std::string &field);
    SubclassPrototype(const std::shared_ptr<Prototype> &prototype);

    std::shared_ptr<Prototype> clone() override;
    void show() const override;
};

#endif
