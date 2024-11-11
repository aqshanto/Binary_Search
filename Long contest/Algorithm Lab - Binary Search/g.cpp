#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int n,k;
const int N=1000000;
vector<int>v(N);

bool checkputmilk(int mid){
    int cont=1;
    int sum=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(v[i]<=mid){
            if(sum +v[i]<=mid){
                sum+=v[i];
            }else{
                cont++;
                sum=v[i];
            }
        }else{
            return false;
        }
    }
    return cont<=k;
}

void solve(){
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int lo=0,hi=1e9+10,mid,ans=-1;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            // cout<<lo<<" "<<mid<<" "<<hi<<endl;
            // checkputmilk(mid)? cout<<"true"<<endl : cout<<"false"<<endl;
            if(checkputmilk(mid)){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        cout<<lo<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=0;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}