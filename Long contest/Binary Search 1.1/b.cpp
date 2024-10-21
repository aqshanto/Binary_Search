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
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int h;
        cin>>h;
        int lH=-1,gH=-1;
        int lo=0,hi=n-1,mid;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(ar[mid]<h){
                lH=ar[mid];
                lo=mid+1;
            }else if(ar[mid]>=h){
                hi=mid-1;
            }
        }
        lo=0,hi=n-1,mid;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(ar[mid]<=h){
                lo=mid+1;
            }else if(ar[mid]>h){
                gH=ar[mid];
                hi=mid-1;
            }
        }
        if(lH==-1){
            cout<<"X ";
        }else{
            cout<<lH<<" ";
        }
        if(gH==-1){
            cout<<"X"<<endl;
        }else{
            cout<<gH<<endl;
        }
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