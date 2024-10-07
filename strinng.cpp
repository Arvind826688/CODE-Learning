#include <iostream>
#include <string>

int main() {
    std::u32string str = U"\U000003A9";  // Greek letter Omega (Ω)
    std::cout << "Length of the string is: " << str.length() << std::endl;
    return 0;
}
