#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
double eps = 1e-10;

double multiply(double n, double nth){
    double ans=1;
    while(nth--){
        ans*=n;
    }
    return ans;
}

void solve(){
    double n,nth;
    cin>>n>>nth;
    double lo=1,hi=n,mid;
    while(hi-lo>eps){
        mid =(lo+hi)/2;
        if(multiply(mid,nth)<n){
            lo=mid;
        }else{
            hi=mid;
        }
    }
    // P*log(N*(10^d)) // pth root of Number N with d decimal places
    cout<<fixed<<setprecision(10)<<lo<<endl;
    cout<<fixed<<setprecision(10)<<hi<<endl;
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