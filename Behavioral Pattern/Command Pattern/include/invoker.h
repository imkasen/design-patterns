#ifndef COMMAND_PATTERN_INVOKER_H
#define COMMAND_PATTERN_INVOKER_H

#include "command.h"
#include <memory>
#include <iostream>

class Invoker {
private:
    std::shared_ptr<Command> command;
public:
    Invoker() = default;
    Invoker(std::shared_ptr<Command> command_ptr);
    ~Invoker() = default;

    void call() const;
};

#endif
