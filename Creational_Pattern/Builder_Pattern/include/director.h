#ifndef BUILDER_PATTERN_DIRECTOR_H
#define BUILDER_PATTERN_DIRECTOR_H

#include "builder.h"

class Director {
private:
    std::shared_ptr<Builder> builder;
public:
    std::shared_ptr<Product> construct();
    void setBuilder(const std::shared_ptr<Builder> &builder_ptr);
};

#endif
