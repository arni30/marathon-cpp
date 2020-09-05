#include<iostream>
#include<string>
#include <vector>
#include <array>
#include <list>
#include"sumFileData.h"

int main(int argc, char** argv) {
    std::cout << sumFileData<int>("example.txt") << std::endl;
    return 0;
}