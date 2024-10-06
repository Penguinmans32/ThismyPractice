#include <iostream>
#include <cctype>
#include <algorithm>
int main() {

    std:: string word;
    int count = 0;
    int count2 = 0;
    std:: cout << "Enter a word: ";
    std:: cin >> word;
    for (char c : word) {
        if(std:: isupper(c)) {
            count++;
        }else {
            count2++;
        }
    }

    if(count == count2) {
        std:: transform(word.begin(), word.end(), word.begin(), ::tolower);
    }else if(count == 2) {
        std:: transform(word.begin(), word.end(), word.begin(), ::tolower);
    }else {
        std:: transform(word.begin(), word.end(), word.begin(), ::toupper);
    }

    std:: cout << word << std:: endl; 
}