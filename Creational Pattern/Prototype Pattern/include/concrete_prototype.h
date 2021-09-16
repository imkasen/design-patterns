#ifndef PROTOTYPE_PATTERN_CONCRETE_PROTOTYPE_H
#define PROTOTYPE_PATTERN_CONCRETE_PROTOTYPE_H

#include "prototype.h"
#include <iostream>

class ConcretePrototype : public Prototype, 
    public std::enable_shared_from_this<ConcretePrototype> {
public:
    ConcretePrototype() = default;
    ConcretePrototype(const std::string &field);
    ConcretePrototype(const std::shared_ptr<Prototype> &prototype);
    virtual ~ConcretePrototype() = default;

    virtual std::shared_ptr<Prototype> clone() override;
    virtual void show() const override;
};

#endif
