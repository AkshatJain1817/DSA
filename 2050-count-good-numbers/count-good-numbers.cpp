class Solution {
public:
    const int MOD = 1e9+7;
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = (n/2);

        long long evenWays = power(5, even);
        long long oddWays = power(4, odd);

        return (evenWays*oddWays)%MOD;
    }

    long long power(long long base, long long x){
        long long result=1;
        base %= MOD;

        while(x>0){
            if(x%2==1){
                result  = (result * base) % MOD;
            }
            base=(base*base)%MOD;
            x /= 2;
        }

        return result;
    }
};