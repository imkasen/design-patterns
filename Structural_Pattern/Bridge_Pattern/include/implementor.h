#ifndef BRIDGE_PATTERN_IMPLEMENTOR_H
#define BRIDGE_PATTERN_IMPLEMENTOR_H

class Implementor {
public:
    Implementor() = default;
    virtual ~Implementor() = default;

    virtual void operationImp() const = 0;
};

#endif
