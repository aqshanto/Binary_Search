// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl "\n"
// double pi= 3.141592653589793238462643383279;

// void solve(){
//     int n;
//     cin>>n;
//     vector<int>ar(n),pre(n+1,0);
//     for(int i=0;i<n;i++){
//         cin>>ar[i];
//         pre[i+1]=pre[i]+ar[i];
//     }
//     // for(auto it:pre){
//     //     cout<<it<<endl;
//     // }
//     int m;
//     cin>>m;
//     for(int i=0;i<m;i++){
//         int num;
//         cin>>num;
//         auto it=lower_bound(pre.begin(),pre.end(),num);
//         // cout<<*it<<endl;
//         cout<<it-pre.begin()<<endl;
//     }
// }

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     // int t; cin>>t; while(t--) solve();
//     solve();
//     return 0;
// }


//with binary search

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    cin>>n;
    int pile[n];
    for(int i=0;i<n;i++){
        cin>>pile[i];
    }
    int prefix[n+1]={0};
    for(int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+pile[i];
    }
    int JNum;
    cin>>JNum;
    int ar[JNum];
    for(int i=0;i<JNum;i++){
        cin>>ar[i];
        int lo=1,hi=n,mid,ans=-1;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(prefix[mid]>=ar[i] && ar[i]>prefix[mid-1]){
                ans=mid;
                break;
            }else if(prefix[mid]<ar[i]){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        cout<<ans<<endl;
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