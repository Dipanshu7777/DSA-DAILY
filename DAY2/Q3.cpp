// remove dupllicate 
// link :https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int unique = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1])
                nums[unique++] = nums[i];
        }

        return unique;
    }
};

int main() {
    int n;
    cout << "Enter the size of the sorted array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the sorted array elements (with possible duplicates):\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution sol;
    int newLength = sol.removeDuplicates(nums);

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < newLength; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
