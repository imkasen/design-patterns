#include "../include/concrete_component.h"
#include "../include/concrete_decorator_a.h"
#include "../include/concrete_decorator_b.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Component> simple_ptr = std::make_shared<ConcreteComponent>();
    simple_ptr->operation();

    std::shared_ptr<Component> decorator1 = std::make_shared<ConcreteDecoratorA>(simple_ptr);
    std::shared_ptr<Component> decorator2 = std::make_shared<ConcreteDecoratorB>(decorator1);
    decorator1->operation();
    decorator2->operation();

    return EXIT_SUCCESS;
}
