#ifndef T01_CHEST_H
#define T01_CHEST_H
#include "Container.h"
#include "LockpickDifficulty.h"

class Chest : public Container{
    public:
        Chest(bool isLocked, const LockpickDifficulty difficulty);
        LockpickDifficulty lockDifficulty() override;
        bool isLocked() override;
    private:
        std::string name() const override ;
};


#endif //T01_CHEST_H
