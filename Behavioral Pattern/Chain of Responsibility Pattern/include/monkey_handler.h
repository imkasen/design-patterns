#ifndef CHAIN_OF_RESPONSIBILITY_PATTERN_MONKEY_HANDLER_H
#define CHAIN_OF_RESPONSIBILITY_PATTERN_MONKEY_HANDLER_H

#include "abstract_handler.h"

class MonkeyHandler : public AbstractHandler {
public:
    MonkeyHandler() = default;
    ~MonkeyHandler() = default;

    void handle(std::string reuqest) const override;
};

#endif
