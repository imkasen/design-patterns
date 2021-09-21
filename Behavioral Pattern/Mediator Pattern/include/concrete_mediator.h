#ifndef MEDIATOR_PATTERN_CONCRETE_MEDIATOR_H
#define MEDIATOR_PATTERN_CONCRETE_MEDIATOR_H

#include "component_1.h"
#include "component_2.h"

class ConcreteMediator : public Mediator, 
    public std::enable_shared_from_this<ConcreteMediator> {
private:
    std::shared_ptr<Component1> component1;
    std::shared_ptr<Component2> component2;
public:
    ConcreteMediator() = default;
    ConcreteMediator(const std::shared_ptr<Component1> &com1_ptr, 
        const std::shared_ptr<Component2> &com2_ptr);
    ~ConcreteMediator() = default;

    void setMediators();
    void notify(const std::shared_ptr<BaseComponent> &sender, 
        const std::string &event) override;
};

#endif
