#include <iostream>

using namespace std;

int main() {

    int n, k;

    cin >> n >> k;

    while(k != 0) {
        int digit = n % 10;
        if(digit != 0) {
            n = n - 1;
        }else {
            n /= 10;
        }
        k--;
    }

    cout << n << endl;

    return 0;
}