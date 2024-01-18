#include <iostream>
#include <string>
#include <cmath>

int percentageOfCharacters(std::string s, char letter) {
    int count = 0;
    for (char c : s) {
        if (c == letter) {
            count++;
        }
    }
    int percentage = round((static_cast<double>(count) / s.length()) * 100);
    return percentage;
}

void main() {
    std::string s ;
    char letter ;
    std::cout << "Enter word: ";
    std::cin >> s;
    
    std::cout << "Enter char: ";
    std::cin >> letter;


    std::cout << percentageOfCharacters(s, letter)<< '%' << std::endl;
}