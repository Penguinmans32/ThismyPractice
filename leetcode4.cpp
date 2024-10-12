#include <iostream>
#include <cmath>

int main() {

    int n;
    std:: cin >> n;

    if(n < 0) {
        return - 1;
    }

    int g = n / 2;
    int prev = 0;

    while(g != prev) {
        prev = g;
        g = (g + n / g) / 2;
    }

    std:: cout << g << '\n';

    return 0;
}