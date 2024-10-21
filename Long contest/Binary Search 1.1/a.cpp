#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    cin>>n;
    int lo=0,hi=1e9,mid,ans=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        // cout<<lo<<" "<<hi<<" "<<mid<<endl;
        int WR=(mid*(mid+1))/2;
        // cout<<WR<<endl;
        if(WR==n){
            ans=mid;
            break;
        }else if(WR<n){
            ans=mid;
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    cout<<ans<<endl;
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