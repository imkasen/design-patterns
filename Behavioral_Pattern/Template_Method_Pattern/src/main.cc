#include "../include/concrete_class_1.h"
#include "../include/concrete_class_2.h"

#include <memory>

int main(int argc, char* argv[]) {
    std::cout << "Same client code can work with different subclasses:" << std::endl;
    std::unique_ptr<ConcreteClass1> cc1_ptr = std::make_unique<ConcreteClass1>();
    cc1_ptr->templateMethod();
    std::unique_ptr<ConcreteClass2> cc2_ptr = std::make_unique<ConcreteClass2>();
    cc2_ptr->templateMethod();

    return 0;
}
