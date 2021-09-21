#ifndef MEDIATOR_PATTERN_MEDIATOR_H
#define MEDIATOR_PATTERN_MEDIATOR_H

#include <string>
#include <memory>

class BaseComponent;

class Mediator {
public:
    Mediator() = default;
    virtual ~Mediator() = default;

    virtual void notify(const std::shared_ptr<BaseComponent> &sender, 
        const std::string &event) = 0;
};

#endif
