#include "stdAlgoV1.h"

void stdAlgoV1(std::string file) {
    std::string str;
    std::ifstream file_stream(file);
    Var var;
    std::forward_list<std::string>list;
    var.size = 0;
    var.vel = false;
    var.rich = false;
    var.no_mel = false;
    var.length = false;
    while (std::getline(file_stream, str)) {
        list.pus = str;
        std::cout << str << std::endl;
        var.size++;
    }
    std::cout << "size: " << var.size << std::endl;
    file_stream.close();

}