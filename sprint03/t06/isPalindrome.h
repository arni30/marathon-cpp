#pragma once
#include<iostream>
#include <iterator>
#include <algorithm>
template<class BidirectionalIterator>
bool isPalindrome(BidirectionalIterator begin, BidirectionalIterator end) {
    return std::equal(begin, std::next(begin, std::distance(begin, end) / 2), std::make_reverse_iterator(end));
}
