/**
 https://leetcode.com/problems/shuffle-string/
 */

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = s;
        int len = indices.size();
        for(int i = 0; i < len; i++)
        {
            res[indices[i]] = s[i];
        }
        return res;
    }
};