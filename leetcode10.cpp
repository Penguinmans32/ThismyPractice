#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    string s;
    cin >> s;

    unordered_map<char, int> mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'D', 1000}};

    int result = 0;
    for(int i =  0; i < s.size(); ++i) {
        if(i + 1 < s.size() && mp[s[i]] < mp[s[i + 1]]) {
            result -= mp[s[i]];
        }else {
            result += mp[s[i]];
        }
    }

    cout << result << '\n';

    return 0;
}