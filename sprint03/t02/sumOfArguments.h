#ifndef T01_OUTPUTANY_H
#define T01_OUTPUTANY_H

template<class T>
T sumOfArguments(T first) {
    return first;
}

template<class T, class ...Ts>
T sumOfArguments(T t, Ts... args) {
    return t + sumOfArguments(args...);
}
#endif //T01_OUTPUTANY_H
