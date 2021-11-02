#ifndef COMPOSITE_PATTERN_COMPOSITE_H
#define COMPOSITE_PATTERN_COMPOSITE_H

#include "component.h"
#include <list>
#include <iostream>

class Composite : public Component, 
    public std::enable_shared_from_this<Composite> {
protected:
    std::list<std::shared_ptr<Component>> children;
public:
    Composite() = default;
    ~Composite() = default;

    void add(const std::shared_ptr<Component> &com_ptr);
    void remove(const std::shared_ptr<Component> &com_ptr);
    void operation() const override;
};

#endif
