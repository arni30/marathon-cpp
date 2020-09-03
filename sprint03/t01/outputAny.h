#ifndef T01_OUTPUTANY_H
#define T01_OUTPUTANY_H
template<class Container>
void outputAny(const Container& c) {
    for (auto a : c)
        std::cout << a << std::endl;
}
#endif //T01_OUTPUTANY_H
