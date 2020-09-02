#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <list>
#include <unistd.h>
#include <fstream>
#include <forward_list>

struct Var {
    int size;
    bool rich;
    bool length;
    bool vel;
    bool no_mel;
};

void stdAlgoV1(std::string file);

