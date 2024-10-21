#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    /*
    8
    10 13 15 1 2 3 5 7
    */
    int lo=0,hi=n-1,mid,ans=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ar[mid]<ar[mid-1] && ar[mid]<ar[mid+1]){
            ans=mid;
            break;
        }else if(ar[mid]<ar[hi]){
            hi=mid;
        }else if(ar[mid]>ar[hi]){
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
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