#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n,k;
    cin>>n>>k;
    if(k<n){
        cout<<k<<endl;
    }else if(k%n!=0 && k>n){
        cout<<k+(k/n)+1<<endl;
    }else{
        cout<<k+(k/n)<<endl;
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}