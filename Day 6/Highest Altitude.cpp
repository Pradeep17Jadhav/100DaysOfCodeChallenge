/*
https://leetcode.com/problems/find-the-highest-altitude
*/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int top = 0;
        int maximum = 0;
        for(auto i: gain)
        {
            top += i;
            maximum = max(top, maximum);
        }
        return maximum;
    }
};
