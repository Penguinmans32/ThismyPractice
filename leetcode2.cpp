#include <iostream>
#include <vector>
#include <algorithm>
int main() {

    std:: vector<int> nums;
    int n;
    std:: cin >> n;

    nums.resize(n);

    for(int i = 0; i < n; ++i) {
        std:: cin >> nums[i];
    }

    int count = 0;
    int count2 = 0;
    for(int i = n - 1; i < n / 2; ++i) {
        if(nums[i] == 1) {
            count2++;
        }
    }

    for(int i = 0; i < n / 2; ++i) {
        if(nums[i] == 1 && nums[n - i - 1] == 1) {
            count++;
        }
    }

    int max = std:: max(count, count2);
    std:: cout << count2 << '\n';

    std:: cout << max << '\n';

    return 0;

    for(int i = 0; i < n; ++i) {
        while(nums[i] != 0) {
            if(nums[i] % 2 == 0) {
                count++;
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - 1 - i; ++j) {
            if(nums[j] > nums[j + 1]) {
                int swap = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = swap;
            }
        }
    }
}