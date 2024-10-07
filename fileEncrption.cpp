#include <iostream>
#include <fstream>
#include <string>

class CaesarCipher {
    private:
    int shift;

    public:
    CaesarCipher(int shift) : shift(shift){
        std::string encrypt(const std::string& text) {
            std::string result = text;
            for(char& c: result){
                if (isalpha(c)){
                    char base = islower(c) ? 'a' : 'A';
                    c = (c- base + shift)% 26 + base;
                }
            }
            return result;
        }
        std::string decrypt(const std::string& text){
            std::string result = text;
            for (char& c : result){
                if (isalpha(c)) {
                    char base = islower(c) ? 'a' : 'A';
                    c= (c - base -shift + 26) % 26 +base;
                }
            }
            return result;
        }
    };

}