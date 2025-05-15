// rotate array 
// prob link : https://leetcode.com/problems/rotate-array/description/

#include <iostream>
#include <vector>
#include <algorithm> // for swap

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int l = n - k, r = n - 1;
        while (l <= r) {
            swap(nums[l], nums[r]);
            l++; r--;
        }
        l = 0; r = n - k - 1;
        while (l <= r) {
            swap(nums[l], nums[r]);
            l++; r--;
        }
        l = 0; r = n - 1;
        while (l <= r) {
            swap(nums[l], nums[r]);
            l++; r--;
        }
    }
};

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    cout << "Enter number of rotations (k): ";
    cin >> k;

    Solution sol;
    sol.rotate(nums, k);
    
    cout << "Rotated array:\n";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}