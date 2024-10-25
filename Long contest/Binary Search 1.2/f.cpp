#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
/*
7 13
6 8 14 9 4 11 10
*/

void solve(){
    int n,t;
    cin>>n>>t;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    vector<int>pre(n,0);
    pre[0]=ar[n-1];
    int j=1;
    for(int i=n-2;i>=0;--i){
        pre[j]=pre[j-1]+ar[i];
        j++;
    }

    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;

    int lo=0,hi=n-1,mid,ans=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(pre[mid]==t){
            ans=mid;
            break;
        }else if(pre[mid]<t){
            ans=mid;
            lo=mid+1;
        }
        else if(pre[mid]>t){
            hi=mid-1;
        }
    }

    ans++;
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