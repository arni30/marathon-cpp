#include "inventory.h"

void routes(std::string &input_str, std::vector<std::string>& input, std::list<char>& result) {
    if(!input.empty()) {
        if (input_str == "help" && input.size() == 1) {
            help();
        } else if (input[0] == "insert")
            insert(result, input);
        else if (input[0] == "remove")
            remove(result, input);
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