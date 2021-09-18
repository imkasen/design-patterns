#ifndef FLYWEIGHT_PATTERN_FLYWEIGHT_FACTORY_H
#define FLYWEIGHT_PATTERN_FLYWEIGHT_FACTORY_H

#include "concrete_flyweight.h"
#include <map>
#include <memory>

class FlyweightFactory {
private:
    std::map<std::string, std::shared_ptr<Flyweight>> fw_map;
public:
    FlyweightFactory() = default;
    ~FlyweightFactory() = default;

    std::shared_ptr<Flyweight> getFlyweight(std::string state);
};

#endif