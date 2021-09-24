#include <iostream>

using namespace std;

int MOD = 1e6+3;

long long modNorm(long long d, long long MOD) 
{
    return ((d % MOD) + MOD) % MOD;
}

long long modAdd(long long x, long long y, long long MOD) 
{
    return modNorm(modNorm(x, MOD) + modNorm(y, MOD), MOD);
}

int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    unsigned n;
    cin >> n;
    long long fib1 = 1,fib2 = 1, fib3 = 1;
    for(unsigned i = 2; i <= n; ++i) 
    {
        fib3 = modAdd(fib1, fib2, MOD);
        fib1 = fib2;
        fib2 = fib3;
    }

    cout << modNorm(fib3, MOD) << "\n";
    return 0;
}