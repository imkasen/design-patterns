#include "../include/concrete_observer.h"
#include "../include/subject.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Subject> sub_ptr = std::make_shared<Subject>();
    std::shared_ptr<Observer> a_ptr = std::make_shared<ConcreteObserver>("A");
    std::shared_ptr<Observer> b_ptr = std::make_shared<ConcreteObserver>("B");
    sub_ptr->attach(a_ptr);
    sub_ptr->attach(b_ptr);

    sub_ptr->setState(1);
    sub_ptr->notify();

    sub_ptr->detach(b_ptr);
    sub_ptr->setState(2);
    sub_ptr->notify();

    return 0;
}
