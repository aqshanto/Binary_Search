#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve()
{
    int n, k;
    cin >> n >> k;
    int lo = 1, hi = 2e9, mid;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        int ele = mid / k;
        int val = (mid * (mid + 1)) / 2;
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}