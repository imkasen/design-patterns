#ifndef BRIDGE_PATTERN_ABSTRACTION_H
#define BRIDGE_PATTERN_ABSTRACTION_H

#include "implementor.h"
#include <memory>

class Abstraction {
protected:
    std::unique_ptr<Implementor> imp_ptr;
public:
    Abstraction() = default;
    Abstraction(std::unique_ptr<Implementor> &imp_ptr);
    virtual ~Abstraction() = default;

    virtual void operation() const = 0;
};

#endif
