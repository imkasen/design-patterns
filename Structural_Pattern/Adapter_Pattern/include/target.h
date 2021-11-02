#ifndef ADAPTER_PATTERN_TARGET_H
#define ADAPTER_PATTERN_TARGET_H

class Target {
public:
    Target() = default;
    virtual ~Target() = default;

    virtual void request() const = 0;
};

#endif
