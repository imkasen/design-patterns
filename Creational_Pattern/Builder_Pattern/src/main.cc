#include "../include/director.h"
#include "../include/concrete_builder.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Builder> builder_ptr = std::make_unique<ConcreteBuilder>();
    std::shared_ptr<Director> director_ptr = std::make_unique<Director>();
    director_ptr->setBuilder(builder_ptr);
    std::shared_ptr<Product> prd_ptr = director_ptr->construct();
    prd_ptr->show();

    return 0;
}
