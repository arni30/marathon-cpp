#include "stdAlgoV2.h"

void read_file(std::ifstream& file_stream, std::forward_list<std::string>& list) {
    std::string str;

    while (std::getline(file_stream, str)) {
        if (!str.empty())
            list.push_front(str);
    }
    if (list.empty()) {
        std::cerr << "error" << std::endl;
        file_stream.close();
        exit(1);
    }

}

bool replace_elem(std::string str) {
    return str.find_first_of("cbl") != std::string::npos;
}

void names_operations(std::forward_list<std::string>& list) {
    for (auto& i : list) {
        if (i.size() < 4)
            i = "Short one";
        if (i.size() > 10)
            i = "Long one";
    }
    list.unique();
    list.sort();
    list.reverse();
}

void write_to_file(std::string file, std::forward_list<std::string>& list) {
    auto dot = std::find(file.begin(),file.end(),'.');
    file.replace(dot,dot, "_mod");
    std::ofstream myfile (file);
    if (myfile.is_open() && !myfile.fail()) {
        for (auto i : list)
            myfile << i << std::endl;
        myfile.close();
    }
}

void stdAlgoV2(std::string file) {
    std::ifstream file_stream(file);
    std::forward_list<std::string>list;

    if (!file_stream.fail()) {
        read_file(file_stream, list);
        list.remove_if(replace_elem);
        names_operations(list);
        write_to_file(file, list);
        file_stream.close();
    }
    else {
        std::cerr << "error" << std::endl;
        exit(1);
    }
}