#include <iostream>

int main() {

    int n;
    std:: cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        std:: cin >> a[i];
    }

    int max = 0, min = 101, maxIndex = 0, minIndex = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
        if(a[i] <= min) {
            min = a[i];
            minIndex = i;
        }
    }
    int result = maxIndex + (n - 1 - minIndex);
    if(maxIndex > minIndex) {
        result -= 1;
    }
    std:: cout << result << std:: endl;
    return 0;
}