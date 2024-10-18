#include <iostream>
#include <unordered_set>
using namespace std;


bool isUnique(int n) {
    string s = to_string(n);
    unordered_set<char> unq;
    
    for(char digit : s) {
        if(unq.find(digit) != unq.end()) {
            return false; // digit duplicate found
        }
        unq.insert(digit);
    }
    return true; // all are unique

}
int main() {

    int y;
    cin >> y;

    int dist = y + 1;

    while(!isUnique(dist)) {
        dist++;
    }
    cout << dist << endl;

    return 0;
}