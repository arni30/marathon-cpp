#pragma once
#include<iostream>
#include <iterator>
#include <algorithm>

template<class RandomAccessIterator>
RandomAccessIterator sortValues(RandomAccessIterator begin, RandomAccessIterator end) {
    for (RandomAccessIterator i = begin; i != end; ++i)
        for (RandomAccessIterator j = begin; j < i; ++j)
            if (*i < *j)
                std::iter_swap(i, j);
    return begin;
}