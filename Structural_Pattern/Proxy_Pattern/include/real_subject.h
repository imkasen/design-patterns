#ifndef PROXY_PATTERN_REAL_SUBJECT_H
#define PROXY_PATTERN_REAL_SUBJECT_H

#include "subject.h"
#include <iostream>

class RealSubject : public Subject {
public:
    RealSubject() = default;
    ~RealSubject() = default;

    void request() const override;
};

#endif
