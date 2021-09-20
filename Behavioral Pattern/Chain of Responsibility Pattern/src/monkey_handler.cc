#include "../include/monkey_handler.h"

void MonkeyHandler::handle(std::string request) const {
    if (request == "Banana") {
        std::cout << "Monkey: I'll eat the " << request << "." << std::endl;
    } else {
        AbstractHandler::handle(request);
    }
}
