// Last updated: 11/26/2026, 11:48:42 PM

class Solution {
public:
    long long MOD = 1'000'000'007;

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long first = powi(5, even);
        long long second = powi(4, odd);

        return (first * second) % MOD;
    }

    long long powi(long long x, long long n) {
        if (n == 0) return 1;

        long long temp = powi(x, n / 2);

        if (n % 2 == 0) {
            return (temp * temp) % MOD;
        }

        return (x * temp % MOD * temp) % MOD;
    }
};
