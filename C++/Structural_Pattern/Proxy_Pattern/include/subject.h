#ifndef PROXY_PATTERN_SUBJECT_H
#define PROXY_PATTERN_SUBJECT_H

class Subject {
public:
    Subject() = default;
    virtual ~Subject() = default;
    virtual void request() const = 0;
};

#endif
