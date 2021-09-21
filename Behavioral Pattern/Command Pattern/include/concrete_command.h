#ifndef COMMAND_PATTERN_CONCRETE_COMMAND_H
#define COMMAND_PATTERN_CONCRETE_COMMAND_H

#include "command.h"
#include "receiver.h"
#include <memory>

class ConcreteCommand : public Command {
private:
    std::shared_ptr<Receiver> receiver;
public:
    ConcreteCommand() = default;
    ConcreteCommand(const std::shared_ptr<Receiver> &receiver_ptr);
    ~ConcreteCommand() = default;

    void execute() const override;
};

#endif
