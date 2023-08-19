class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0)
            return 1/myPositivePow(x,n);
        return myPositivePow(x,n);
    }

    double myPositivePow(double x, int n)
    {
        if(n == 0)
            return 1;
        double y = pow(x,abs(n)/2);
        if(abs(n)%2)
            return y * y * x;
        else
            return y * y;
    }
};