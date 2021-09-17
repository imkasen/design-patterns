#ifndef COMPOSITE_PATTERN_LEAF_H
#define COMPOSITE_PATTERN_LEAF_H

#include "component.h"
#include <iostream>

class Leaf : public Component {
public:
    Leaf() = default;
    ~Leaf() = default;

    void operation() const override;
};

#endif
