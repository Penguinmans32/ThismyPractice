#include <iostream>
#include <vector>
using namespace std;

int main() {

    int m;
    cin >> m;

    vector<string> mag(m);
    for(int i = 0; i < m; ++i) {
        cin >> mag[i];
    }

    int count = 0;
    for(int i = 0; i < m; ++i) {
        if(mag[i] != mag[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}