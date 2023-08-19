class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long a = n;
        if(a < 0)   a = -a;

        while(a)
        {
            if(a%2 == 0)
            {
                x = x * x;
                a = a/2;
            }
            else
            {
                ans = ans * x;
                a = a - 1;
            }
        }
        if(n < 0)
            return 1/ans;
        else
            return ans;
    }
};