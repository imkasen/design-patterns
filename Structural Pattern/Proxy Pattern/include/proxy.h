#ifndef PROXY_PATTERN_PROXY_H
#define PROXY_PATTERN_PROXY_H

#include "subject.h"
#include "real_subject.h"
#include <memory>

class Proxy : public Subject {
private:
    std::unique_ptr<RealSubject> rs_ptr;
    void preRequest() const;
    void afterRequest() const;
public:
    Proxy();
    ~Proxy() = default;

    void request() const override;
};

#endif
