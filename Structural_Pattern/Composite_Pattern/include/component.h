#ifndef COMPOSITE_PATTERN_COMPONENT_H
#define COMPOSITE_PATTERN_COMPONENT_H

#include <memory>

class Component {
protected:
    std::shared_ptr<Component> parent;
public:
    Component() = default;
    virtual ~Component() = default;

    void setParent(const std::shared_ptr<Component> &parent_ptr);
    std::shared_ptr<Component> getParent() const;
    virtual void operation() const = 0;
};

#endif
