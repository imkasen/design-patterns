#ifndef COMMAND_PATTERN_RECEIVER_H
#define COMMAND_PATTERN_RECEIVER_H

#include <iostream>

class Receiver {
public:
    Receiver() = default;
    ~Receiver() = default;

    void action() const;
};

#endif
