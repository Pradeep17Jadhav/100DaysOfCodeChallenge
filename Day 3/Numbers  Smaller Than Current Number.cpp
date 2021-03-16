/**
 https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
*/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len = nums.size();
        vector<int>result(len, 0);
        for(int i = 0; i  < len; i++)
        {
            for(int j = 0; j < len; j++)
            {
                if(nums[j] < nums[i])
                    if(i != j)
                        result[i]++;
            }
        }
        return result;
    }
};