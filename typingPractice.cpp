//The quick brown fox jumps over 13 lazy dogs! While doing so, it shouts: "Hello, World!" @ 5:30 PM on a sunny day.

#include <iostream>
int main() {
    // Typing practice begins now: let's iterate from 0 to 9 and beyond!
    for(int i = 0; i <= 9; ++i) {
        if(i % 2 == 0) {
            std::cout << "Even number: " << i << " -> Divisible by 2\n";
        } else {
            std::cout << "Odd number: " << i << " -> Not divisible by 2\n";
        }
    }

    // Time to deal with symbols and math!
    double pi = 3.14159;
    double radius = 5.0;
    double area = pi * (radius * radius);
    std::cout << "Circle Area: " << area << " square units\n";

    bool isValid = true;
    if(isValid && area > 0.0) {
        std::cout << "The calculated area is valid.\n";
    }

    // Don't forget to practice escaping: \"quotes\", \\backslashes\\, \t tabs, and \n newlines.
    std::string symbols = "~!@#$%^&*()_+{}|:\"<>?-=[]\\;',./`";
    std::cout << "Here are all the symbols you need to type: " << symbols << std::endl;
    
    // Including all the digits: 0123456789
    std::string digits = "0123456789";
    std::cout << "And here are all the digits: " << digits << std::endl;

    // Practice writing the alphabet too: a-z and A-Z
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string alphabetCaps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "Lowercase alphabet: " << alphabet << "\nUppercase alphabet: " << alphabetCaps << std::endl;

    return 0;
}
