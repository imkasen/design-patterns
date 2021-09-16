#ifndef BRIDGE_PATTERN_REFINED_ABSTRACTION_H
#define BRIDGE_PATTERN_REFINED_ABSTRACTION_H

#include "abstraction.h"
#include <iostream>

class RefinedAbstraction : public Abstraction {
public:
    RefinedAbstraction() = default;
    RefinedAbstraction(std::unique_ptr<Implementor> &imp_ptr);
    ~RefinedAbstraction() = default;

    void operation() const override;
};

#endif
