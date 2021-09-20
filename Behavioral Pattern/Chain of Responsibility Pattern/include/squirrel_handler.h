#ifndef CHAIN_OF_RESPONSIBILITY_PATTERN_SQUIRREL_HANDLER_H
#define CHAIN_OF_RESPONSIBILITY_PATTERN_SQUIRREL_HANDLER_H

#include "abstract_handler.h"

class SquirrelHandler : public AbstractHandler {
public:
    SquirrelHandler() = default;
    ~SquirrelHandler() = default;

    void handle(std::string reuqest) const override;
};

#endif
