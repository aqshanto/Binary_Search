#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    vector<string>v(16);
    v[0]="A";
    for(int i=1;i<=15;i++){
        v[i]=v[i-1]+(char)(65+i)+v[i-1];
    }
    int n;
    cin>>n;
    cout<<v[n-1];
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}