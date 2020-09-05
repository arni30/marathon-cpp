#pragma once
#include<iostream>
#include <iterator>
#include <algorithm>
template<class Container>
void squareValue(Container& container) {
    for (auto& i : container)
        i *= i;
}
