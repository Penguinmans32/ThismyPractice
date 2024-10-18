#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s;
    cin >> s;

    int kek = 0;
    int w = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(isupper(s[i])) {
            kek++;
        }else {
            w++;
        }
    }

    if(kek > w) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }else if(kek == w) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;

    return 0;
}