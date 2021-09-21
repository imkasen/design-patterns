#include "../include/dog_handler.h"

void DogHandler::handle(const std::string &request) const {
    if (request == "MeatBall") {
        std::cout << "Dog: I'll eat the " << request << "." << std::endl;
    } else {
        AbstractHandler::handle(request);
    }
}
