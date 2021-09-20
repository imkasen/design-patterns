#ifndef COMMAND_PATTERN_COMMAND_H
#define COMMAND_PATTERN_COMMAND_H

class Command {
public:
    Command() = default;
    virtual ~Command() = default;

    virtual void execute() const = 0;
};

#endif
