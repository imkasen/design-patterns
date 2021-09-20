#ifndef CHAIN_OF_RESPONSIBILITY_PATTERN_ABSTRACT_HANDLER_H
#define CHAIN_OF_RESPONSIBILITY_PATTERN_ABSTRACT_HANDLER_H

#include "handler.h"

class AbstractHandler : public Handler {
private:
    std::shared_ptr<Handler> next_handler;
public:
    AbstractHandler() = default;
    virtual ~AbstractHandler() = default;

    virtual std::shared_ptr<Handler> setNext(std::shared_ptr<Handler> handler) override;
    virtual void handle(std::string request) const override;
};

#endif
