#ifndef OBSERVER_PATTERN_SUBJECT_H
#define OBSERVER_PATTERN_SUBJECT_H

#include <vector>
#include <algorithm>
#include <memory>
#include <iostream>
class Observer;

class Subject : public std::enable_shared_from_this<Subject> {
private:
    std::vector<std::shared_ptr<Observer>> vec_obs;
    int p_state;
public:
    Subject() = default;
    ~Subject() = default;
    
    void attach(const std::shared_ptr<Observer> &obs_ptr);
    void detach(const std::shared_ptr<Observer> &obs_ptr);
    void notify();

    int getState() const;
    void setState(int i);
};

#endif
