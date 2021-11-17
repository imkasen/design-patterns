#include "../include/caretaker.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Originator> originator_ptr 
        = std::make_shared<Originator>("Super-duper-super-puper-super.");
    std::shared_ptr<Caretaker> caretaker_ptr = std::make_shared<Caretaker>(originator_ptr);
    std::cout << std::endl;

    caretaker_ptr->backup();
    originator_ptr->doSomething();
    caretaker_ptr->backup();
    originator_ptr->doSomething();
    caretaker_ptr->backup();
    originator_ptr->doSomething();

    std::cout << std::endl;
    caretaker_ptr->showHistory();
    std::cout << std::endl;

    std::cout << "Client: Now, let's rollback!" << std::endl;
    caretaker_ptr->undo();
    std::cout << "Client: Once more!" << std::endl;
    caretaker_ptr->undo();

    return 0;
}
