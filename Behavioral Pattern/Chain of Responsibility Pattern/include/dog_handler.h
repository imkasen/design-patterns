#ifndef CHAIN_OF_RESPONSIBILITY_PATTERN_DOG_HANDLER_H
#define CHAIN_OF_RESPONSIBILITY_PATTERN_DOG_HANDLER_H

#include "abstract_handler.h"

class DogHandler : public AbstractHandler {
public:
    DogHandler() = default;
    ~DogHandler() = default;

    void handle(std::string reuqest) const override;
};

#endif
