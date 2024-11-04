#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi = 3.141592653589793238462643383279;

void solve()
{
    int n, t;
    cin >> n >> t;
    int ar[n], prefix[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int j = 1;
    for (int i = n - 1; i >= 0; --i)
    {
        prefix[j] = prefix[j - 1] + ar[i];
        j++;
    }
    int cnt = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int lo = i, hi = n, mid, ans = -1;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;
            if (prefix[mid] - prefix[i - 1] <= t)
            {
                lo = mid + 1;
            }
            else if (prefix[mid] - prefix[i - 1] > t)
            {
                hi = mid - 1;
            }
        }
        cnt = max(cnt, lo - i);
    }
    cout << cnt << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}