#ifndef ADAPTER_PATTERN_ADAPTEE_H
#define ADAPTER_PATTERN_ADAPTEE_H

#include <iostream>

class Adaptee {
public:
    Adaptee() = default;
    ~Adaptee() = default;

    void specificRequest() const;
};

#endif
