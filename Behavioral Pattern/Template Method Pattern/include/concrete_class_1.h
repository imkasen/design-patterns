#ifndef TEMPLATE_METHOD_PATTERN_CONCRETE_CLASS_1_H
#define TEMPLATE_METHOD_PATTERN_CONCRETE_CLASS_1_H

#include "abstract_class.h"

class ConcreteClass1 : public AbstractClass {
protected:
    void requiredOperation1() const override;
    void requiredOperation2() const override;
public:
    ConcreteClass1() = default;
    ~ConcreteClass1() = default;
};

#endif
