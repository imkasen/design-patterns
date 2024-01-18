#ifndef DECORATOR_PATTERN_COMPONENT_H
#define DECORATOR_PATTERN_COMPONENT_H

class Component {
public:
    Component() = default;
    virtual ~Component() = default;

    virtual void operation() const = 0;
};

#endif
