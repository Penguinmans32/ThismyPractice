#include <iostream>
#include <cmath>
int main() {

    int n, m;

    std:: cin >> n >> m;

    int nextPrime = n + 1;

    while(true) {
        bool isPrime = true;
        if(nextPrime <= 1) {
            isPrime = false;
        }
        if(nextPrime  == 2) {
            isPrime = true;
        }
        if(nextPrime %  2 == 0) {
            isPrime = false;
        }

        for(int i = 3; i <= std:: sqrt(nextPrime); i+= 2) {
            if(nextPrime % i  == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            break;
        }
        nextPrime++;
    }

    if(nextPrime == m) {
        std:: cout << "Yes" << std:: endl;
    }else {
        std:: cout << "No" << std:: endl;
    }
}