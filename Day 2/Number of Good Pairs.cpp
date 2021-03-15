// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good = 0;
        int len = nums.size();
        for(int i = 0; i < len; i++)
        {
            for(int j = i + 1; j < len; j++)
            {
                if(nums[i] == nums[j] && i < j)
                    good++;
            }
        }
        return good;
    }
};