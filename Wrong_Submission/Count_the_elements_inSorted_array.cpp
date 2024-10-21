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
    int find,cnt=0;
    cin>>find;
    // first occurance
    int lo=0,hi=n-1,mid,index=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ar[mid]==find){
            index=mid;
            hi=mid-1;
        }else if(ar[mid]<find){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    int fo=index;
    // last occurance
    lo=0,hi=n-1,mid,index=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ar[mid]==find){
            index=mid;
            lo=mid+1;
        }else if(ar[mid]<find){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    int LO=index;
    cout<<LO-fo+1<<endl;
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