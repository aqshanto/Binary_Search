#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n,q;
    cin>>n>>q;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    while(q--){
        int num;
        cin>>num;
        int lo=0,hi=n-1,mid,ans=-1;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(ar[mid]==num){
                ans=mid;
                hi=mid-1;
            }else if(ar[mid]<num){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        cout<<ans<<endl;
    }
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