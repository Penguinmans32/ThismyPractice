#include <iostream>
using namespace std;
#include <algorithm>
int main() {

    string s;
    cin >> s;
    string t;
    cin >> t;

    
    string rev = t;
    reverse(rev.begin(), rev.end());

    if(rev == s) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
}