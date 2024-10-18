#include <iostream>

using namespace std;

int main() {

    int n, h;
    cin >> n >> h;
    int s[n];
    for(int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    int result = 0;

    for(int i = 0; i < n; ++i) {
        if(h > s[i]) {
            result += 1;
        }else if(s[i] == h) {
            result += 1;
        }else {
            result += 2;
        }
    }

    cout << result << endl;

    return 0;
}