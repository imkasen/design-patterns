#include "../include/flyweight_factory.h"

std::shared_ptr<Flyweight> FlyweightFactory::getFlyweight(std::string state) {
    auto ret = this->fw_map.insert({state, std::make_shared<ConcreteFlyweight>(state)});
    if (!ret.second) {
        std::cout << state << " is aready in the pool, use the exist one." << std::endl;
    }
    return ret.first->second;
}
