#include "../include/flyweight_factory.h"

int main(int argc, char* argv[]) {
    std::unique_ptr<FlyweightFactory> fac_ptr = std::make_unique<FlyweightFactory>();
    std::shared_ptr<Flyweight> fw_ptr = fac_ptr->getFlyweight("one");
    fw_ptr->operation();
    std::shared_ptr<Flyweight> fw_ptr2 = fac_ptr->getFlyweight("two");
    fw_ptr2->operation();
    std::shared_ptr<Flyweight> fw_ptr3 = fac_ptr->getFlyweight("one");
    fw_ptr3->operation();

    return 0;
}
