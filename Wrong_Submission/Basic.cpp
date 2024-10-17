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
    int lo=0,hi=n-1,mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ar[mid]==find){
            cout<<mid<<endl;
            break;
        }
        else if(ar[mid]<find) lo=mid+1;
        else hi=mid-1;
    }
    if(lo>hi)cout<<"Not Found"<<endl;
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