#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int n,m;
const int N=1e6+10;
int TreHight[N];

bool isCutPos(int hight){
    int ans=0;
    for(int i=0;i<n;i++){
        if(TreHight[i]>=hight){
            ans+=(TreHight[i]-hight);
        }
        if(ans>=m){
            break;
        }
    }
    if(ans>=m)return true;
    return false;
}

void solve(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>TreHight[i];
    }
    int lo=0,hi=1e9+1,mid;
    while(hi-lo>1){
        mid=(lo+hi)/2;
        if(isCutPos(mid)){
            lo=mid;
        }else{
            hi=mid-1;
        }
    }
    if(isCutPos(hi))cout<<hi<<endl;
    else cout<<lo<<endl;
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