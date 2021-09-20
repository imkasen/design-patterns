#include "../include/handler.h"

void Handler::handle(std::string request) const {
    std::cout << "Handler handle(): " << request << std::endl;
}
