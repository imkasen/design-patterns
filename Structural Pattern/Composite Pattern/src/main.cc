#include "../include/composite.h"
#include "../include/leaf.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Composite> tree = std::make_shared<Composite>();
    std::shared_ptr<Composite> branch1 = std::make_shared<Composite>();
    std::shared_ptr<Composite> branch2 = std::make_shared<Composite>();

    std::shared_ptr<Component> leaf1 = std::make_shared<Leaf>();
    std::shared_ptr<Component> leaf2 = std::make_shared<Leaf>();
    std::shared_ptr<Component> leaf3 = std::make_shared<Leaf>();

    branch1->add(leaf1);
    branch1->add(leaf2);
    branch2->add(leaf3);

    // branch1->operation();
    // branch2->operation();

    tree->add(branch1);
    tree->add(branch2);

    tree->operation();

    return EXIT_SUCCESS;
}
