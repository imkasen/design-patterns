#include "../include/singleton.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Singleton> sg_ptr = Singleton::getInstance();
    sg_ptr->singletonOperation();

    return EXIT_SUCCESS;
}
