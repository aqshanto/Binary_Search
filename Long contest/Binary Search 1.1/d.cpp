#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(int t){
    int n;
    cin>>n;
    int ar[n],mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n-1;i++){
        mx=max(mx,ar[i+1]-ar[i]);
    }
    cout<<"Case "<<t<<": "<<mx<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }
    return 0;
}