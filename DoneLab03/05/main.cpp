#include <iostream>
#include <vector>
#include <string>

typedef std::vector<std::string> StringVec;

int main() {
    StringVec items = {"apple", "banana", "cherry"};

    auto it = items.begin();

    decltype(items.size()) total = items.size();

    double pi = 3.14159;
    int truncatedPi = static_cast<int>(pi);

    std::cout << "Bytes occupied by int: " << sizeof(truncatedPi) << "\n";
    std::cout << "Bytes occupied by double: " << sizeof(pi) << "\n";

    return 0;
}