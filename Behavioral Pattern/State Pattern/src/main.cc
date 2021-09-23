#include "../include/concrete_state_a.h"
#include "../include/concrete_state_b.h"
#include "../include/context.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Context> c_ptr = std::make_shared<Context>();
    c_ptr->request();
    c_ptr->request();
    c_ptr->request();

    return EXIT_SUCCESS;
}
