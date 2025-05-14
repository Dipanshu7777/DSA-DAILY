//check equal arrays
//prob link : https://www.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&company=Goldman%20Sachs&sortBy=submissions

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int>mapp;
        for(auto &it : a){
            mapp[it]++;
        }
        for(auto &it : b){
            if(mapp.find(it)==mapp.end()|| mapp[it] == 0) return false;
            else{
                mapp[it]--;
            }
        }
        return true;
    }
};