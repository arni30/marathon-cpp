#include "inventory.h"

void help() {
    std::cout << "Available commands:" << std::endl;
    std::cout << "1. insert <itemType>" << std::endl;
    std::cout << "2. remove <itemType>" << std::endl;
    std::cout << "3. show"<< std::endl;
    std::cout << "4. help" << std::endl;
    std::cout << "5. exit" << std::endl;
}
void insert(std::string &input_str, std::list<char> &result, std::vector<std::string>& input) {
    if(input.size() == 2) {
        if (result.size() < 12) {
            if (input[1] == "w" || input[1] == "f" || input[1] == "p" || input[1] == "a") {
                result.push_back(input[1][0]);
                std::cout << input[1] << " was inserted." << std::endl;
            } else
                std::cerr << "Invalid item." << std::endl;
        }
        else
            std::cerr << "Inventory is full." << std::endl;
    }
    else
        std::cerr << "Invalid command." << std::endl;
}
void remove(std::string &input_str, std::list<char> &result, std::vector<std::string>& input) {
    auto it = std::find(result.begin(), result.end(), input[1][0]);
    if(input.size() == 2) {
        if ((input[1] == "w" || input[1] == "f" || input[1] == "p" || input[1] == "a" ) && it != result.end()) {
            result.erase(it);
            std::cout << input[1] << " was removed." << std::endl;
        }
        else
            std::cerr << "Invalid item." << std::endl;
    }
    else
        std::cerr << "Invalid command." << std::endl;
}
void show(std::list<char>& result) {
    std::cout << "Inventory { ";
    for (auto const i: result)
        std::cout << i << " ";
    for (auto i = result.size(); i < 12; i++) {
        std::cout << "- ";
    }
    std::cout << '}' << std::endl;
}

void routes(std::string &input_str, std::vector<std::string>& input, std::list<char>& result) {
    if(!input.empty()) {
        if (input_str == "help" && input.size() == 1) {
            help();
        } else if (input[0] == "insert")
            insert(input_str, result, input);
        else if (input[0] == "remove")
            remove(input_str, result, input);
        else if (input[0] == "show" && input.size() == 1) {
            show(result);
        }
    else if (input[0] == "exit") {
        return;
    }
        else {
            std::cerr << "Invalid command." << std::endl;
            return;
        }
    }
}

std::string ltrim(const std::string& s, const char c)
{
    size_t start = s.find_first_not_of(c);
    return (start == std::string::npos) ? "" : s.substr(start);
}

std::string rtrim(const std::string& s, const char c)
{
    size_t end = s.find_last_not_of(c);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

std::string trim(const std::string& s, const char c)
{
    return rtrim(ltrim(s, c), c);
}


void sepparate_on_subs(std::vector<std::string>& input, std::string &input_str) {
    std::stringstream stream(input_str);
    std::string trimmed;
    while (std::getline(stream, input_str, ' ')) {
        trimmed = trim(input_str, ' ');
        if (!trimmed.empty())
            input.push_back(trimmed);
        trimmed.clear();
    }
}

void inventory() {
    std::list<char> result;
    std::string input_str;
    std::vector<std::string>input = {};

    while (input_str != "exit"){
        std::cout << "Enter command:> ";
        std::getline(std::cin, input_str);
        sepparate_on_subs(input, input_str);
        routes(input_str, input, result);
        input.clear();
    }
    std::cout << "Bye." << std::endl;
}