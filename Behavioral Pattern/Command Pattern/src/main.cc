#include "../include/invoker.h"
#include "../include/concrete_command.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Receiver> receiver_ptr = std::make_shared<Receiver>();
    std::shared_ptr<ConcreteCommand> cc_ptr = std::make_shared<ConcreteCommand>(receiver_ptr);
    std::shared_ptr<Invoker> invoker_ptr = std::make_shared<Invoker>(cc_ptr);
    invoker_ptr->call();

    return EXIT_SUCCESS;
}
