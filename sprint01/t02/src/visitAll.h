#ifndef T02_VISITALL_H
#define T02_VISITALL_H
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <list>
#include <deque>

struct s_city {
    std::string name;
    int stamina;
    int distance;
    int index;
};
void find_path(std::deque<s_city>& city);
void sepparate_by_comma(const char **argv, int i, std::deque<s_city>& city);
void fill(const int argc, const char **argv,  std::deque<s_city>& city);
void validationArguments(const int argc);
void visitAll(const int argc, const char **argv);
void validationArguments(const int argc);
#endif //T02_VISITALL_H