#include <iostream>

void check_idx(char *str, size_t& index) {
    if (str[index] != '\0')
        throw 0;
}

auto validation (char **argv, int argc) {
    auto counter = 1;
    auto index = 0ul;

    try {
            std::stoi(argv[++counter], &index);
            check_idx(argv[counter], index);
            std::stof(argv[++counter], &index);
            check_idx(argv[counter], index);
            std::stod(argv[++counter], &index);
            check_idx(argv[counter], index);
    }
    catch (...) {
            std::cerr << "Invalid argument: " << argv[counter] << std::endl;
            exit(1);
    }
}
void print_result (char **argv) {
    auto counter = 0;

    std::cout << "Name = " << argv[++counter] << std::endl;
    std::cout << "Level = " << argv[++counter] << std::endl;
    std::cout << "Health = " << argv[++counter] << std::endl;
    std::cout << "Stamina = " << argv[++counter] << std::endl;
}


int main(int argc, char **argv) {
    if (argc != 5) {
        std::cerr << "usage:./automaton [name] [level] [health] [stamina]\n";
        exit(1);
    }
    else {
        validation(argv, argc);
        print_result(argv);
    }
    return 0;
}
