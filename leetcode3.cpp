#include <iostream>
#include <vector>
int main() {

    std:: vector<int> nums;
    int n;
    std:: cin >> n;

    nums.resize(n);

    for(int i = 0; i < n; ++i) {
        std:: cin >> nums[i];
    }

    int size = nums.size();

    for(int i = n - 1; i>=0; --i) {
        if(nums[i] < 9) {
            nums[i++];
            break;
        }else {
            nums[i] = 0;
        }
    }
    nums.insert(nums.begin(), 1);

    for(int i = 0; i < nums.size(); ++i) {
        std:: cout << nums[i] << ' ';
    }

    return 0;
}