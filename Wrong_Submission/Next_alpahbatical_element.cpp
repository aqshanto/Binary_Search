#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    string str;
    char ch;
    cin>>str>>ch;
    int n=str.size();
    int lo=0,hi=n-1,mid;
    char ans='a';
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(str[mid]>ch){
            ans=str[mid];
            hi=mid-1;
        }else{
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