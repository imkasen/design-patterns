#ifndef FACADE_PATTERN_SYSTEM_C_H
#define FACADE_PATTERN_SYSTEM_C_H

#include <iostream>

class SystemC {
public:
    SystemC() = default;
    ~SystemC() = default;

    void operationC() const;
};

#endif