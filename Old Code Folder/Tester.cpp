#include <iostream>
#include <string>

int main () {

    std::cout << "Hello World\n";
    std::string name;
    std::cin >> name;
    std::cout << "Hello " + name;
    return 0;
}