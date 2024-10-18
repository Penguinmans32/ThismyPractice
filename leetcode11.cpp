#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> l(n);

    for(int i = 0; i < n; ++i) {
        cin >> l[i];
    }

    bool sorted = true;

    for(int i = 0; i < l.size() - 1; ++i) {
        if(l[i] <= l[i + 1]) {
            sorted = false;
            break;
        }
    }

    cout << (sorted ? "No" : "Yes") << endl;
    return 0;
}