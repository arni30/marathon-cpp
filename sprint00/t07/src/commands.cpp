#include "inventory.h"

void help() {
    std::cout << "Available commands:" << std::endl;
    std::cout << "1. insert <itemType>" << std::endl;
    std::cout << "2. remove <itemType>" << std::endl;
    std::cout << "3. show"<< std::endl;
    std::cout << "4. help" << std::endl;
    std::cout << "5. exit" << std::endl;
}

void insert(std::list<char> &result, std::vector<std::string>& input) {
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

void remove(std::list<char> &result, std::vector<std::string>& input) {
    auto it = std::find(result.begin(), result.end(), input[1][0]);
    if(input.size() == 2) {
        if ((input[1] == "w" || input[1] == "f" || input[1] == "p"
            || input[1] == "a" ) && it != result.end()) {
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

