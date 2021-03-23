/*
https://leetcode.com/problems/flipping-an-image/
To reverse, started loop from end and then added to array
I could have used reverse() function instead, but i wanted to reverse it manually.

In 2nd solution i have used reverse() and Bitwise OR operator
Link to 2nd solution - https://github.com/Pradeep17Jadhav/100DaysOfCodeChallenge/blob/edb94ddeb577057f85f121b84825aa7dcbba3344/Day%209/Flipping%20an%20Image%20Simple.cpp

*/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++)
        {
            vector<int> rev;
            for(int j = image[i].size() - 1; j >= 0 ; j--)
            {
                rev.push_back(image[i][j]);
            }
            for(int j = 0; j < image[i].size() ; j++)
            {
                if(rev[j])
                    rev[j] = 0;
                else
                    rev[j] = 1;
            }
            image[i] = rev;
        }
        return image;
    }
};
