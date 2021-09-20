#include "../include/invoker.h"

Invoker::Invoker(std::shared_ptr<Command> command_ptr) : command(command_ptr) {}

void Invoker::call() const {
    std::cout << "Invoker call()" << std::endl;
    this->command->execute();
}
