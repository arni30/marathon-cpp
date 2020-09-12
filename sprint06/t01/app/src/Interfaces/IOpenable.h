#ifndef T01_IOPENABLE_H
#define T01_IOPENABLE_H
#include "Containers/LockpickDifficulty.h"


class IOpenable {
    public:
        virtual bool tryToOpen (LockpickDifficulty lockDif) = 0;
};


#endif //T01_IOPENABLE_H
