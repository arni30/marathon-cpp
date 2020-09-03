#include "inventory.h"

std::string ltrim(const std::string& s, const char c) {
    size_t start = s.find_first_not_of(c);
    return (start == std::string::npos) ? "" : s.substr(start);
}

std::string rtrim(const std::string& s, const char c) {
    size_t end = s.find_last_not_of(c);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

std::string trim(const std::string& s, const char c) {
    return rtrim(ltrim(s, c), c);
}
