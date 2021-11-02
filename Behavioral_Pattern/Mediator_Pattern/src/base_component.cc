#include "../include/base_component.h"

BaseComponent::BaseComponent(const std::shared_ptr<Mediator> &mediator_ptr) : mediator(mediator_ptr) {}

void BaseComponent::setMediator(const std::shared_ptr<Mediator> &mediator_ptr) {
    this->mediator = mediator_ptr;
}
