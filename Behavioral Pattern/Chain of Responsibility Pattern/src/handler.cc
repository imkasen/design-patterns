#include "../include/handler.h"

void Handler::handle(const std::string &request) const {
    std::cout << "Handler handle(): " << request << std::endl;
}
