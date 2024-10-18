#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int s[n];

    for(int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    int result[n];

    for(int i = 0; i < n; ++i) {
        result[s[i] - 1] = i + 1;
    }
    
    for(int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}