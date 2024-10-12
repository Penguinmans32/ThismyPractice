#include <iostream>
#include <vector>

using namespace std;

void printIntervals(const vector<vector<int>>& intervals) {

    for(const vector<int>& interval : intervals) {
        for(int num : interval) {
            cout << num << " ";
        }
        cout << endl;
    }
}
int main() {

    vector<vector<int>> intervals = {{1,2}, {3,4}, {5,6}};
    printIntervals(intervals);

    return 0;
}