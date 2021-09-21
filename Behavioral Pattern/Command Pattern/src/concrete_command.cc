#include "../include/concrete_command.h"

ConcreteCommand::ConcreteCommand(const std::shared_ptr<Receiver> &receiver_ptr) : receiver(receiver_ptr) {}

void ConcreteCommand::execute() const {
    std::cout << "ConcreteCommand execute()." << std::endl;
    this->receiver->action();
}
