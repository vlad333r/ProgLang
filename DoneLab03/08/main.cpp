#include <iostream>

int main() {
    int x = 1, y = 1, z = 2;
    std::cout << std::boolalpha << ((x == y) + (x == z) == true) << std::endl;
    return 0;
}