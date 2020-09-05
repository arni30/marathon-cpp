#ifndef T04_OUTPUTCONTAINER_H
#define T04_OUTPUTCONTAINER_H
#include<iostream>
#include <iterator>
#include <algorithm>
template<typename Container>
void outputContainer(const Container& container) {
    std::ostream_iterator<typename Container::value_type> cout(std::cout, "\n");
    std::copy(container.begin(), container.end(), cout);
}
#endif
