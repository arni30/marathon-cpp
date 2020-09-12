#ifndef T01_BARREL_H
#define T01_BARREL_H
#include "Container.h"

class Barrel : public Container{
    public:
        Barrel();
        LockpickDifficulty lockDifficulty() override;
        bool isLocked() override;
    private:
        std::string name() const override;

};


#endif //T01_BARREL_H
