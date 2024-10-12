#include <iostream>
#include <unordered_map>
#include <vector>

int main() {

    std:: vector<int> v;

    int n;
    std:: cin >> n;

    v.resize(n);

    for(int i = 0; i < n; ++i) {
        std:: cin >> v[i];
    } 

    std:: unordered_map<int, int> freq;

    for(int n : v) {
        if(freq.find(n) != freq.end()) {
            freq[n]++;
        }else {
            freq[n] = 1;
        }
    }

    for(const auto& pair : freq) {
        if(pair.second == 1) {
            std:: cout << pair.first << std:: endl;
        }
    }

    return 0;   
}