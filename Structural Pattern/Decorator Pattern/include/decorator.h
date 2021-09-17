#ifndef DECORATOR_PATTERN_DECORATOR_H
#define DECORATOR_PATTERN_DECORATOR_H

#include "component.h"
#include <memory>

class Decorator : public Component {
protected:
    std::shared_ptr<Component> component;
public:
    Decorator() = default;
    Decorator(const std::shared_ptr<Component> &com_ptr);
    virtual ~Decorator() = default;

    virtual void operation() const override;
};

#endif
