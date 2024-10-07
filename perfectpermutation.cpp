#include <iostream>

int main() {

    int n;
    std:: cin >> n;
    if (n % 2 == 1) {
        std:: cout << "-1" << std:: endl;
    }else {
        for(int i = 1; i <= n; ++i) {
            if(i % 2 == 1) {
                std:: cout << i + 1 << " ";
            }else {
                std:: cout << i - 1 << " ";
            }
        }
    }
    return 0;
}