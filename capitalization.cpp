#include <iostream>

int main() {

    std:: string word;

    std:: cin >> word;

    if(!word.empty()) {
        char first = word[0];
        if(std:: islower(first)) {
            word[0] = std:: toupper(first);
            std:: cout << word << std:: endl;
        }else {
            std:: cout << word << std:: endl;
        }
    }
}