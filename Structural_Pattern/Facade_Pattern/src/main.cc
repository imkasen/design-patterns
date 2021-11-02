#include "../include/facade.h"

int main(int argc, char* argv[]) {
    std::unique_ptr<Facade> fac_ptr = std::make_unique<Facade>();
    fac_ptr->wrapOperation();

    return EXIT_SUCCESS;
}
