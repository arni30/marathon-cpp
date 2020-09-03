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
    int no_mel;
};

void stdAlgoV1(std::string file);
void read_file(std::ifstream& file_stream, std::forward_list<std::string>& list, Var& var);
void true_false (bool a);
void output(Var& var);
void checker(std::forward_list<std::string>& list, Var& var);
