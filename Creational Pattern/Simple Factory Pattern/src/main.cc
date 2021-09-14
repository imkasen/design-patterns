#include "../include/factory.h"

int main(int argc, char* argv[]) {
    std::unique_ptr<Factory> fac_ptr = std::make_unique<Factory>();
    std::unique_ptr<Product> pa_ptr = std::move(fac_ptr->createProduct("A"));
    std::unique_ptr<Product> pb_ptr = std::move(fac_ptr->createProduct("B"));

    pa_ptr->use();
    pb_ptr->use();

    return EXIT_SUCCESS;
}

