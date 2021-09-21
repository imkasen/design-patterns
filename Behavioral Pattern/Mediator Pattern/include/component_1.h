#ifndef MEDIATOR_PATTERN_COMPONENT_1_H
#define MEDIATOR_PATTERN_COMPONENT_1_H

#include "base_component.h"
#include <iostream>

class Component1 : public BaseComponent, 
    public std::enable_shared_from_this<Component1> {
public:
    Component1() = default;
    ~Component1() = default;

    void doA();
    void doB();
};

#endif
