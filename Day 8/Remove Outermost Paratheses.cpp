/*
https://leetcode.com/problems/remove-outermost-parentheses/

*/

class Solution {
public:
    string removeOuterParentheses(string S) {
        int active = 0;
        string ans = "";
        string temp = "";
        for(auto i: S)
        {
            if(i == '(')
                active++;
            else
                active--;
            temp += i;
            
            if(!active)
            {
                temp = temp.substr(1, temp.size() - 2);
                ans += temp;
                temp = "";                
            }
        }
        return ans;
    }
};
