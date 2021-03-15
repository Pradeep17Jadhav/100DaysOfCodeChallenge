// https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int len = jewels.size();
        int count = 0;
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < stones.size(); j++)
            {
                if(jewels[i] == stones[j])
                    count++;
            }
        }
        return count;
    }
};