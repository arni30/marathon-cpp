#include "stdAlgoV1.h"

void read_file(std::ifstream& file_stream, std::forward_list<std::string>& list, Var& var) {
    std::string str;

    while (std::getline(file_stream, str)) {
        if (!str.empty())
            list.push_front(str);
    }
    var.size = std::distance(list.begin(), list.end());
}

void true_false (bool a) {
    if (a == true)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
}

void output(Var& var) {
    std::cout << "size: " << var.size << std::endl;
    std::cout << "contains 'rich': ";
    true_false(var.rich);
    std::cout << "none of lengths is 15: ";
    true_false(var.length);
    std::cout << "all end with 'vel': ";
    true_false(var.vel);
    std::cout << "without 'mel': " << var.no_mel << std::endl;
}

void checker(std::forward_list<std::string>& list, Var& var) {
    std::string str;

    for (auto i : list) {
        str = i;
        // std::transform(str.begin(), str.end(), str.begin(),
        //                [](unsigned char c) { return std::tolower(c); });
        if (str.find("rich") != std::string::npos)
            var.rich = true;
        if (str.find("vel") == std::string::npos)
            var.vel = false;
        if (str.find("mel") == std::string::npos)
            var.no_mel++;
        if (str.size() == 15)
            var.length = false;
    }
}
void stdAlgoV1(std::string file) {
    std::ifstream file_stream(file);
    Var var;
    std::forward_list<std::string>list;

    var.size = 0;
    var.vel = true;
    var.rich = false;
    var.no_mel = false;
    var.length = true;
    if (!file_stream.fail()) {
        read_file(file_stream, list, var);
        checker(list, var);
        output(var);
    }
    else
        std::cerr << "error" << std::endl;
    file_stream.close();
}