#include <iostream>

int main() {

    long long n;
    std:: cin >> n;
    int count = 0;
    std:: string num = std:: to_string(n);

    for (char c : num) {
        if(c == '4' || c == '7') {
            count++;
        }
    }

    if(count == 4 || count == 7) {
        std:: cout << "YES" << std:: endl;
    }else {
        std:: cout << "NO" << std:: endl;
    }
}