#include "../include/concrete_component_a.h"
#include "../include/concrete_component_b.h"
#include "../include/concrete_visitor_1.h"
#include "../include/concrete_visitor_2.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<ConcreteComponentA> cca_ptr = std::make_shared<ConcreteComponentA>();
    std::shared_ptr<ConcreteComponentB> ccb_ptr = std::make_shared<ConcreteComponentB>();
    std::shared_ptr<ConcreteVisitor1> cv1_ptr = std::make_shared<ConcreteVisitor1>();
    std::shared_ptr<ConcreteVisitor2> cv2_ptr = std::make_shared<ConcreteVisitor2>();
    cca_ptr->accept(cv1_ptr);
    ccb_ptr->accept(cv1_ptr);
    cca_ptr->accept(cv2_ptr);
    ccb_ptr->accept(cv2_ptr);

    return EXIT_SUCCESS;
}
