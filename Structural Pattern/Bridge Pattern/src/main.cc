#include "../include/refined_abstraction.h"
#include "../include/concrete_implementor_a.h"
#include "../include/concrete_implementor_b.h"

int main(int argc, char* argv[]) {
    std::unique_ptr<Implementor> imp_a_ptr = std::make_unique<ConcreteImplementorA>();
    std::unique_ptr<Abstraction> abs_a_ptr = std::make_unique<RefinedAbstraction>(imp_a_ptr);
    abs_a_ptr->operation();

    std::unique_ptr<Implementor> imp_b_ptr = std::make_unique<ConcreteImplementorB>();
    std::unique_ptr<Abstraction> abs_b_ptr = std::make_unique<RefinedAbstraction>(imp_b_ptr);
    abs_b_ptr->operation();

    return EXIT_SUCCESS;
}
