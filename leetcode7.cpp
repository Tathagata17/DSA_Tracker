#include <climits>
class Solution {
    public:
        int reverse(int x) {
            long long sum=0;
            while(x!=0)
            {
                int a=x%10;
                sum=(sum*10)+a;
                x=x/10;
            }
            if(sum>INT_MAX||sum<INT_MIN)
            {
                return 0;
            }
            else
            {
                return sum;
            }
        }
    };