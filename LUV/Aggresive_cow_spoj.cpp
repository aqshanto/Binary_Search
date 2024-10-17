#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
const int stmax=1e5+10;
int st,cow;
int stloc[stmax];

bool isPlacePos(int mindif){
    int lastpos=-1,cowcnt=0;
    for(int i=0;i<st;i++){
        if(stloc[i]-lastpos>=mindif || lastpos==-1){
            cowcnt++;
            lastpos=stloc[i];
        }else if(lastpos==-1){
            lastpos=stloc[i];
        }
        if(cowcnt==cow){
            break;
        }
    }
    if(cowcnt==cow){
        return true;
    }
    return false;
}

void solve(){
    cin>>st>>cow;
    for(int i=0;i<st;i++){
        cin>>stloc[i];
    }
    sort(stloc,stloc+st);
    int lo=0,hi=1e9-1,mid;
    while(hi-lo>1){
        mid=(lo+hi)/2;
        if(isPlacePos(mid)==true){
            lo=mid;
        }else if(isPlacePos(mid)!=true){
            hi=mid-1;
        }
    }
    if(isPlacePos(hi)==true){
        cout<<hi<<endl;
    }else {
        cout<<lo<<endl;
    }
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