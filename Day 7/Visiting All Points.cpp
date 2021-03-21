/*
https://leetcode.com/problems/minimum-time-visiting-all-points
So far the most tricky question solved on leetcode
Had fun understanding the concept and coming with most easy and optimized solution
*/

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int count = 0, h, v;

        for(int i = 1; i < points.size(); i++)
        {
            h = abs(points[i][0] - points[i - 1][0]);            
            v = abs(points[i][1] - points[i - 1][1]);
            count += max(h, v);
        }
        return count;
    }
};
