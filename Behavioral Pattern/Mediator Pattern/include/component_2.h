#ifndef MEDIATOR_PATTERN_COMPONENT_2_H
#define MEDIATOR_PATTERN_COMPONENT_2_H

#include "base_component.h"
#include <iostream>

class Component2 : public BaseComponent, 
    public std::enable_shared_from_this<Component2> {
public:
    Component2() = default;
    ~Component2() = default;

    void doC();
    void doD();
};

#endif
