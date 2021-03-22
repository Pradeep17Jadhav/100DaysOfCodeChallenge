/*
Challenging question. Tried with simple bruteforce approach. Saw many complicated answers on Discussion page, will change them back later after more practice.

Leared a good way to initialize a 2D vector array with predefined values.
*/


class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> arr(m, vector<int> (n, 0));
        int odd = 0;
        
        for(int i = 0; i < indices.size(); i++)
        {
            int row = indices[i][0];
            int col = indices[i][1];
            for(int j = 0; j < arr[row].size(); j++)
            {
                arr[row][j]++;
            }
            for(int k = 0; k < arr.size(); k++)
            {
                arr[k][col]++;
            }
        }
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(arr[i][j] % 2 == 1)
                    odd++;
            }
        }
        return odd;
    }
};
