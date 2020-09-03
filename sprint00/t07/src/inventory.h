#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <list>

void inventory();
void help();
void insert(std::list<char> &result, std::vector<std::string>& input);
void remove(std::list<char> &result, std::vector<std::string>& input);
void show(std::list<char>& result);
void routes(std::string &input_str, std::vector<std::string>& input, std::list<char>& result);
std::string ltrim(const std::string& s, const char c);
std::string rtrim(const std::string& s, const char c);
std::string trim(const std::string& s, const char c);
void sepparate_on_subs(std::vector<std::string>& input, std::string &input_str);