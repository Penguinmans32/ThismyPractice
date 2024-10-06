#include <iostream>

int main() {

    std:: string n1, m1;
    std:: cin >> n1 >> m1;

    std:: string result(n1.length(), '0');

    for(size_t i = 0; i < n1.length(); ++i) {
        if(n1[i] != m1[i]) {
            result[i] = '1';
        }
    }

    std:: cout << result << std:: endl;
}