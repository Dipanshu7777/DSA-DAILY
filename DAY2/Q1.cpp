//move zeros
// link : https://leetcode.com/problems/move-zeroes/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                count++;
            else if (count != 0) {
                nums[i - count] = nums[i];
                nums[i] = 0;
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution sol;
    sol.moveZeroes(nums);

    cout << "Array after moving zeroes to the end:\n";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
