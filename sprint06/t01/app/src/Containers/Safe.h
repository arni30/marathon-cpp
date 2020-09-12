#ifndef T01_SAFE_H
#define T01_SAFE_H

#include "Container.h"

class Safe : public Container{
public:
    Safe(bool isLocked, const LockpickDifficulty difficulty);
    LockpickDifficulty lockDifficulty() override;
    bool isLocked() override;
private:
    std::string name() const override;
};



#endif //T01_SAFE_H
