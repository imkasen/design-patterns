#include "../include/squirrel_handler.h"

void SquirrelHandler::handle(std::string request) const {
    if (request == "Nut") {
        std::cout << "Squirrel: I'll eat the " << request << "." << std::endl;
    } else {
        AbstractHandler::handle(request);
    }
}
