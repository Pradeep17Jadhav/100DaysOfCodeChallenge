/** 
 https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
 Used remainder after dividing by 10. Other way is to convert number to string and
 then individual characters
 */

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n)
        {
            int rem = n %  10;
            n = n / 10;
            sum += rem;
            product *= rem;
        }
        return product - sum;
    }
};