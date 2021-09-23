#ifndef VISITOR_PATTERN_COMPONENT_H
#define VISITOR_PATTERN_COMPONENT_H

#include "visitor.h"

class Component {
public:
    Component() = default;
    virtual ~Component() = default;

    virtual void accept(const std::shared_ptr<Visitor> &visitor_ptr) = 0;
};

#endif
