/**
https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent
First code is traditional for loop approach. It executed in 0ms, faster than 2nd approach.

Second code is easy 4 liner solution
Learned to use this syntax of for loop and using it for fist time. It is like "for element in squence" in Python.
This for loop executed in 4ms, very slow as compared to traditional loop
*/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one = "";
        string two = "";
        int len = word1.size();
        for(int i = 0; i < len; i++)
        {
            one += word1[i];
        }
        len = word2.size();
        for(int i = 0; i < len; i++)
        {
            two += word2[i];
        }
        return one == two;
    }
};

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one, two;
        for(auto str: word1) one += str;
        for(auto str: word2) two += str;
        return one == two;
    }
};
