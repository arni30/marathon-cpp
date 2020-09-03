#pragma once
#include <fstream>
#include <iterator>
#include <numeric>
template <class T>
T sumFileData(const std::string& fileName) {
    std::ifstream file(fileName);

    T t = std::accumulate(std::istream_iterator<T>(file), {}, T{0});
    file.close();
    return t;
}
