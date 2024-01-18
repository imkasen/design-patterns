#ifndef CHAIN_OF_RESPONSIBILITY_PATTERN_HANDLER_H
#define CHAIN_OF_RESPONSIBILITY_PATTERN_HANDLER_H

#include <string>
#include <memory>
#include <iostream>

class Handler {
public:
    Handler() = default;
    virtual ~Handler() = default;

    virtual std::shared_ptr<Handler> setNext(const std::shared_ptr<Handler> &handler) = 0;
    virtual void handle(const std::string &request) const;
};

#endif
