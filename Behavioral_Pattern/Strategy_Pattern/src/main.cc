#include "../include/context.h"
#include "../include/concrete_strategy_a.h"
#include "../include/concrete_strategy_b.h"

int main(int argc, char* argv[]) {
    std::shared_ptr<Strategy> s1_ptr = std::make_shared<ConcreteStrategyA>();
    std::shared_ptr<Context> cx1_ptr = std::make_shared<Context>();
    cx1_ptr->setStrategy(s1_ptr);
    cx1_ptr->algorithm();

    std::shared_ptr<Strategy> s2_ptr = std::make_shared<ConcreteStrategyB>();
    std::shared_ptr<Context> cx2_ptr = std::make_shared<Context>();
    cx2_ptr->setStrategy(s2_ptr);
    cx2_ptr->algorithm();
    
    return EXIT_SUCCESS;
}
