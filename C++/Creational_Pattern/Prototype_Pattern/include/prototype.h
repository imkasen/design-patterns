#ifndef PROTOTYPE_PATTERN_PROTOTYPE_H
#define PROTOTYPE_PATTERN_PROTOTYPE_H

#include <memory>
#include <string>

class Prototype {
protected:
    std::string field;
public:
    Prototype(const std::string &field);
    Prototype(const std::shared_ptr<Prototype> &prototype);

    virtual std::shared_ptr<Prototype> clone() = 0;
    virtual void show() const = 0;
};

#endif
