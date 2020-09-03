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

void stdAlgoV2(std::string file);
void read_file(std::ifstream& file_stream, std::forward_list<std::string>& list);
void write_to_file(std::string file, std::forward_list<std::string>& list);
void names_operations(std::forward_list<std::string>& list);
bool replace_elem(std::string str);
void read_file(std::ifstream& file_stream, std::forward_list<std::string>& list);
