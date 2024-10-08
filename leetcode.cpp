#include <iostream>

int main() {

    int x;

    std:: cin >> x;

    int original = x;
    int reversed = 0;

    while(x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    if(original == reversed) {
        std:: cout << "This is palindrome number" << std:: endl;
    }else {
        std:: cout << "This is not palindrome number" << std:: endl;
    }
}