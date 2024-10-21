#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
const int N=1e5+10;
int st,cow;
int stloc[N];

bool isPlaceCow(int mid){
    int lastcow=-1,cowcnt=0;
    for(int i=0;i<st;i++){
        if(stloc[i]-lastcow>=mid || lastcow==-1){
            cowcnt++;
            lastcow=stloc[i];
        }
        if(cowcnt==cow)break;
    }
    if(cowcnt==cow)return true;
    return false;
}

void solve(){
    cin>>st>>cow;
    for(int i=0;i<st;i++){
        cin>>stloc[i];
    }
    sort(stloc,stloc+st);
    int lo=1,hi=1e9,mid,ans=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(isPlaceCow(mid)){
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