#include "../include/concrete_factory_a.h"
#include "../include/concrete_factory_b.h"

int main(int argc, char* argv[]) {
    std::unique_ptr<Factory> fac_a_ptr = std::make_unique<ConcreteFactoryA>();
    std::unique_ptr<Factory> fac_b_ptr = std::make_unique<ConcreteFactoryB>();

    std::unique_ptr<Product> prd_a_ptr = std::move(fac_a_ptr->factoryMethod());
    std::unique_ptr<Product> prd_b_ptr = std::move(fac_b_ptr->factoryMethod());

    prd_a_ptr->use();
    prd_b_ptr->use();

    return EXIT_SUCCESS;
}
