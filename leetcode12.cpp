#include <iostream>


using namespace std;

int main() {

    int n;
    cin >> n;

    int s[n];

    for(int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    bool hard = false;
    for(int i = 0; i < n; ++i) {
        if(s[i] == 1) {
            hard = true;
            break;
        }
    }

    if(hard) {
        cout << "Hard" << endl;
    }else {
        cout << "Easy" << endl;
    }

    return 0;
}