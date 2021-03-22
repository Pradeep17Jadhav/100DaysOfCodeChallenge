/*
https://leetcode.com/problems/find-numbers-with-even-number-of-digits
Got to use to_string() again
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(auto num: nums)
        {
            if(to_string(num).size() % 2 == 0)
                ans++;
        }
        return ans;
    }
};
