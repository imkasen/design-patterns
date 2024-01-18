#ifndef BUILDER_PATTERN_CONCRETE_BUILDER_H
#define BUILDER_PATTERN_CONCRETE_BUILDER_H

#include "builder.h"

class ConcreteBuilder : public Builder {
public:
    ConcreteBuilder();

    void buildPartA() override;
    void buildPartB() override;
    void buildPartC() override;

    std::shared_ptr<Product> getResult() override;
};

#endif
