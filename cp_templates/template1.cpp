#include <bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vl vector<ll>
#define vi vector<int>
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).begin(), (x).end()
typedef int64_t ll;
typedef unsigned long long ull;
typedef long double lld;
#define pi pair<ll, int>
//========================================Debugging Starts=================================
#ifndef Oendl_JUDGE
#else
#define debug(x)
#endif
void _print(ll t)
{
        cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
//==========================================Debugging Ends==========================================
// vector<vector<int>> vec( n , vector<int> (m, 0));
// priority_queue<pi, vector<pi>, greater<pi>>q;
bool prime[100000];
ll gcd(ll a, ll b)
{
        if (b == 0)
                return a;
        return gcd(b, a % b);
}
void SieveOfEratosthenes()
{
        memset(prime, true, sizeof(prime));
        for (int p = 2; p * p <= 100000; p++)
        {
                if (prime[p] == true)
                {
                        for (int i = p * p; i <= 100000; i += p)
                                prime[i] = false;
                }
        }
}
long long binpow(long long a, long long b)
{
        a %= MOD;
        long long res = 1;
        while (b > 0)
        {
                if (b & 1)
                        res = res * a % MOD;
                a = a * a % MOD;
                b >>= 1;
        }
        return res % MOD;
}
ll invmd(ll n)
{
        return (binpow(n, MOD - 2));
}
ll ceil2(ll a, ll b)
{
        return (a + b - 1) / b;
}
 const int N=1e5+5;
ll factorial(int n)
{
        ll fact = 1;
        rep(i, 2, n + 1)
            fact = fact * i;
        return fact;
}

ll diff(string s1, string s2)
{
        int a = s1.size();
        int sum = 0;
        rep(i, 0, a)
        {
                sum += abs(s2[i] - s1[i]);
        }
        return sum;
}

void solve()
{
    

}
       
int main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
#ifndef Oendl_JUDGE
#endif
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
}
