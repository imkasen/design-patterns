#include "../include/abstract_handler.h"

std::shared_ptr<Handler> AbstractHandler::setNext(std::shared_ptr<Handler> handler) {
    this->next_handler = handler;
    return handler;
}

void AbstractHandler::handle(std::string request) const {
    if (this->next_handler) {
        this->next_handler->handle(request);
    }
}
