#include <iostream>

using namespace std;

int main() {

    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    for(int i = 0; i < t; ++i) { // this run the t process 
        for(int j = 0; j < n - 1; ++j) { // this will loop through the stirng 
            if(s[j] == 'B' && s[j + 1] == 'G') { // check if this conditon is true 
                s[j] = 'G'; // if it is then perform swap
                s[j + 1] = 'B'; // swap it!
                ++j; // idk but it says proceed to next string to avoid double swapping
            }
        }
    }

    cout << s << endl;
    return 0;
}