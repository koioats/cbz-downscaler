// testing

#include <iostream>

int main(void) {
    std::string str = "abcdefg";
    str.erase(str.length() - 4, 4);
    std::cout << str << std::endl;
    return 0;
}