#ifndef TEMPLATE_METHOD_PATTERN_ABSTRACT_CLASS_H
#define TEMPLATE_METHOD_PATTERN_ABSTRACT_CLASS_H

#include <iostream>

class AbstractClass {
protected:
    void baseOperation1() const;
    void baseOperation2() const;
    void baseOperation3() const;
    virtual void requiredOperation1() const = 0;
    virtual void requiredOperation2() const = 0;
    virtual void hook1() const;
    virtual void hook2() const;
public:
    AbstractClass() = default;
    virtual ~AbstractClass() = default;

    void templateMethod() const;
};

#endif
