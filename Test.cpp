#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
/*Binary Exponentiation*/
// long long bexp(int x, int n){if (n == 0)return 1;else if (n % 2 == 1){return x * bexp(x * x, (n-1) / 2);}return bexp(x * x, n / 2);}
/*Smallest Prime Factor*/
// int spf[1000001];for(int i=0;i<=1000000;i++)spf[i]=i;for(int i=2;i*i<=1000000;i++){if(spf[i]==i){for(int j=i*i;j<=1000000;j+=i){if(spf[j]==j){spf[j]=i;}}}}
/*Sieve Of Eratosthenes*/
// bool isPrime[1000001];memset(isPrime,true,sizeof(isPrime));isPrime[1]=0;isPrime[0]=0;for(int i=2;i*i<=1000000;i++){if(isPrime[i]){for(int j=i*i;j<=1000000;j+=i){isPrime[j]=0;}}}
/*Euler Totient Function*/
// int ETF(int n){float result = n;for (int i = 2; i * i <= n; i++){if (n % i == 0){while (n % i == 0){n /= i;}result *= (1.0 - (1.0 / (float)i));}}if (n > 1){result = result - result / n;}return (int)result;}
/*Modulo Multiplicative Inverse*/
// int modInverse(int A, int M){int m0 = M;int y = 0, x = 1;if (M == 1)return 0;while (A > 1){int q = A / M;int t = M;M = A % M, A = t;t = y;y = x - q * y;x = t;}if (x < 0)x += m0;return x;}
int main()
{
    fastio;
    vector<int> vec(4, 0);
    vec.push_back(4);
    for (auto x : vec)
    {
        cout << x << " ";
    }
    return 0;
}
