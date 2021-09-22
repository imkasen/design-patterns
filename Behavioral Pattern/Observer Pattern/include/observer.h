#ifndef OBSERVER_PATTERN_OBSERVER_H
#define OBSERVER_PATTERN_OBSERVER_H

#include "subject.h"

class Observer {
public:
    Observer() = default;
    virtual ~Observer() = default;
    
    virtual void update(const std::shared_ptr<Subject> &sub_ptr) = 0;
};

#endif
