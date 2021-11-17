#include "../include/adapter.h"

int main(int argc, char* argv[]) {
    std::unique_ptr<Adaptee> adaptee_ptr = std::make_unique<Adaptee>();
    std::unique_ptr<Target> target_ptr = std::make_unique<Adapter>(adaptee_ptr);
    target_ptr->request();

    return 0;
}
