#include "../include/subject.h"
#include "../include/observer.h"

void Subject::attach(const std::shared_ptr<Observer> &obs_ptr) {
    this->vec_obs.push_back(obs_ptr);
}

void Subject::detach(const std::shared_ptr<Observer> &obs_ptr) {
    auto iter = std::find(this->vec_obs.begin(), this->vec_obs.end(), obs_ptr);
    if (iter != this->vec_obs.end()) {
        this->vec_obs.erase(iter);
    }
}

void Subject::notify() {
    for (auto ptr : this->vec_obs) {
        ptr->update(shared_from_this());
    }
}

int Subject::getState() const {
    return this->p_state;
}

void Subject::setState(int i) {
    this->p_state = i;
}
