#ifndef MEDIATOR_PATTERN_BASE_COMPONENT_H
#define MEDIATOR_PATTERN_BASE_COMPONENT_H

#include "mediator.h"

class BaseComponent {
protected:
    std::shared_ptr<Mediator> mediator;
public:
    BaseComponent() = default;
    BaseComponent(const std::shared_ptr<Mediator> &mediator_ptr);
    virtual ~BaseComponent() = default;

    virtual void setMediator(const std::shared_ptr<Mediator> &mediator_ptr);
};

#endif
