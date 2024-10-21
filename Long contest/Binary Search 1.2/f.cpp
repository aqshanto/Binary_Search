#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n,t;
    cin>>n>>t;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    vector<int>pre(n,0);
    int j=0;
    for(int i=n-1;i>=0;--i){
        if(i==n-1)pre[j]=ar[i];
        else
            pre[j]=pre[j-1]+ar[i];
        j++;
    }
    int lo=0,hi=n-1,mid,ans=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(pre[mid]==t){
            ans=mid;
            break;
        }else if(pre[mid]<t){
            ans=mid;
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    cout<<ans+1<<endl;
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