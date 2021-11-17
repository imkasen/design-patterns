#include "../include/monkey_handler.h"
#include "../include/squirrel_handler.h"
#include "../include/dog_handler.h"
#include <vector>

int main(int argc, char* argv[]) {
    std::shared_ptr<MonkeyHandler> mh_ptr = std::make_shared<MonkeyHandler>();
    std::shared_ptr<SquirrelHandler> sh_ptr = std::make_shared<SquirrelHandler>();
    std::shared_ptr<DogHandler> dh_ptr = std::make_shared<DogHandler>();

    mh_ptr->setNext(sh_ptr)->setNext(dh_ptr);

    std::vector<std::string> food = {"Nut", "Banana", "MeatBall"};
    for (const auto &f : food) {
        mh_ptr->handle(f);
    }

    return 0;
}
