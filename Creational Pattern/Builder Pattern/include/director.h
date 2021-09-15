#ifndef BUILDER_PATTERN_DIRECTOR_H
#define BUILDER_PATTERN_DIRECTOR_H

#include "builder.h"

class Director {
private:
    std::shared_ptr<Builder> builder;
public:
    Director() = default;
    ~Director() = default;

    std::shared_ptr<Product> construct();
    void setBuilder(std::shared_ptr<Builder> builder_ptr);
};

#endif
