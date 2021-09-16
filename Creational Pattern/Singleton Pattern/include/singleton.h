#ifndef SINGLETON_PATTERN_SINGLETON_H
#define SINGLETON_PATTERN_SINGLETON_H

#include <memory>
#include <iostream>

class Singleton {
private:
    inline static std::shared_ptr<Singleton> instance = nullptr;
public:
    Singleton() = default;
    ~Singleton() = default;

    static std::shared_ptr<Singleton> getInstance();
    void singletonOperation() const;
};

#endif
