#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {13, 46, 24, 52, 20, 9};

    for (int i = 0; i < nums.size() - 1; i++) {

        int mini = i;

        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] < nums[mini]) {
                mini = j;
            }
        }

        swap(nums[i], nums[mini]);
    }

    for (int val : nums) {
        cout << val << ",";
    }

    return 0;
}