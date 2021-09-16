#ifndef ADAPTER_PATTERN_ADAPTER_H
#define ADAPTER_PATTERN_ADAPTER_H

#include "target.h"
#include "adaptee.h"
#include <memory>

class Adapter : public Target {
private:
    std::unique_ptr<Adaptee> adaptee;
public:
    Adapter() = default;
    Adapter(std::unique_ptr<Adaptee> &adaptee);
    ~Adapter() = default;

    void request() const override;
};

#endif
