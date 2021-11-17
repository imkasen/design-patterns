#include "../include/concrete_prototype.h"
#include "../include/subclass_prototype.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Prototype> prototype = std::make_shared<ConcretePrototype>("cp1");
    prototype->show();
    std::shared_ptr<Prototype> clone_prototype = prototype->clone();
    clone_prototype->show();

    std::shared_ptr<Prototype> prototype2 = std::make_shared<SubclassPrototype>("sp1");
    prototype2->show();
    std::shared_ptr<Prototype> clone_prototype2 = prototype2->clone();
    clone_prototype2->show();

    return 0;
}
