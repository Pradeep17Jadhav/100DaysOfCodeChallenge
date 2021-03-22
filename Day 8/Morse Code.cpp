/*
https://leetcode.com/problems/unique-morse-code-words
Used Set in cpp for first time, works as expected
Got more exposure to typecasting
*/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> list {};
        vector<string> morse {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(auto word: words)
        {
            string str = "";
            for(auto letter: word)
            {
                str += (string)morse[int(letter) - 97];
            }
            list.insert(str);
        }
        return list.size();
    }
};
