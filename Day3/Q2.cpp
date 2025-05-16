//  Container With Most Water
// link :https://leetcode.com/problems/container-with-most-water/description/

#include <iostream>
#include <vector>
#include <algorithm>  // for max and min
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int area = 0;

        while (i < j) {  // should be i < j not i <= j to avoid duplicate/zero width
            area = max(area, (j - i) * min(height[i], height[j]));

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        return area;
    }
};

int main() {
    Solution sol;
    vector<int> height;
    int n, val;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the heights: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        height.push_back(val);
    }

    int result = sol.maxArea(height);

    cout << "Maximum area: " << result << endl;

    return 0;
}
