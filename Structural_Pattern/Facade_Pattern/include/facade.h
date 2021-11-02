#ifndef FACADE_PATTERN_FACADE_H
#define FACADE_PATTERN_FACADE_H

#include "system_a.h"
#include "system_b.h"
#include "system_c.h"
#include <memory>

class Facade {
private:
    std::unique_ptr<SystemA> sys_a_ptr;
    std::unique_ptr<SystemB> sys_b_ptr;
    std::unique_ptr<SystemC> sys_c_ptr;
public:
    Facade();
    ~Facade() = default;

    void wrapOperation() const;
};

#endif
