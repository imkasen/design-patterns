#ifndef TEMPLATE_METHOD_PATTERN_CONCRETE_CLASS_2_H
#define TEMPLATE_METHOD_PATTERN_CONCRETE_CLASS_2_H

#include "abstract_class.h"

class ConcreteClass2 : public AbstractClass {
protected:
    void requiredOperation1() const override;
    void requiredOperation2() const override;
    void hook1() const override;
public:
    ConcreteClass2() = default;
    ~ConcreteClass2() = default;
};

#endif
