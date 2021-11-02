#ifndef FLYWEIGHT_PATTERN_FLYWEIGHT_H
#define FLYWEIGHT_PATTERN_FLYWEIGHT_H

class Flyweight {
public:
    Flyweight() = default;
    virtual ~Flyweight() = default;

    virtual void operation() const = 0;
};

#endif
