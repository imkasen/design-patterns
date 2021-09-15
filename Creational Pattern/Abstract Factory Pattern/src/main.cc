#include "../include/concrete_factory_1.h"
#include "../include/concrete_factory_2.h"

int main(int argc, char* argv[]) {
    std::unique_ptr<AbstractFactory> fac1_ptr = std::make_unique<ConcreteFactory1>();
    std::unique_ptr<AbstractProductA> prd_a1_ptr = std::move(fac1_ptr->createProductA());
    std::unique_ptr<AbstractProductB> prd_b1_ptr = std::move(fac1_ptr->createProductB());
    prd_a1_ptr->use();
    prd_b1_ptr->eat();

    std::unique_ptr<AbstractFactory> fac2_ptr = std::make_unique<ConcreteFactory2>();
    std::unique_ptr<AbstractProductA> prd_a2_ptr = std::move(fac2_ptr->createProductA());
    std::unique_ptr<AbstractProductB> prd_b2_ptr = std::move(fac2_ptr->createProductB());
    prd_a2_ptr->use();
    prd_b2_ptr->eat();

    return EXIT_SUCCESS;
}
