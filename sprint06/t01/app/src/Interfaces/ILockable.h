//
// Created by Oleksandr Arnopolin on 9/9/20.
//

#ifndef T01_ILOCKABLE_H
#define T01_ILOCKABLE_H
#include "Containers/LockpickDifficulty.h"

class ILockable {
    public:
        virtual LockpickDifficulty lockDifficulty() = 0;
        virtual bool isLocked() = 0;
};


#endif //T01_ILOCKABLE_H
