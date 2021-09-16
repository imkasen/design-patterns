#ifndef PROTOTYPE_PATTERN_PROTOTYPE_H
#define PROTOTYPE_PATTERN_PROTOTYPE_H

#include <memory>
#include <string>

class Prototype {
protected:
    std::string field;
public:
    Prototype() = default;
    Prototype(std::string field);
    Prototype(std::shared_ptr<Prototype> prototype);
    virtual ~Prototype() = default;

    virtual std::shared_ptr<Prototype> clone() = 0;
    virtual void show() const = 0;
};

#endif
