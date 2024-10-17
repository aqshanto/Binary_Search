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
    int find;
    cin>>find;
    int ans=-1;
    int lo=0,hi=n-1,mid;
    while(lo<=hi){ //first occurance
        mid=(lo+hi)/2;
        if(ar[mid]==find){
            ans=mid+1;
            hi=mid-1;
        }else if(ar[mid]<find){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    cout<<"first occurance "<<ans<<endl;
    ans=-1;
    lo=0;
    hi=n-1;
    while(lo<=hi){ //first occurance
        mid=(lo+hi)/2;
        if(ar[mid]==find){
            ans=mid+1;
            lo=mid+1;
        }else if(ar[mid]<find){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    cout<<"last occurance "<<ans<<endl;
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