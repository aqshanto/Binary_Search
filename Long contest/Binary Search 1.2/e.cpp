#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int h,p,a;

bool die(int &h,int &mid){
    if(h-mid*p<=0){
        return true;
    }else{
        h-=mid*p;
        h+=a;
        return false;
    }
}

void solve(){
    cin>>h>>p>>a;
    int i=1,cnt=0;
    if(h<=p)cout<<1<<endl;
    else{
        int lo=1,hi=1e6+1,mid,ans=-1;
        while(lo<=hi){
            mid =(lo+hi)/2;
            int sum=(mid*(mid+1))/2;
            int health=h-(p*sum)+(a*(mid-1));
            if(health<=0){
                ans=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        cout<<2*ans-1<<endl;
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