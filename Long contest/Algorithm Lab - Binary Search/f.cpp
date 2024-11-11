#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int j=1;j<=t;j++){
        cout<<"Case "<<j<<":"<<endl;
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        while(q--){
            int a,b;
            cin>>a>>b;
            auto lo=lower_bound(v.begin(),v.end(),a);
            auto hi=upper_bound(v.begin(),v.end(),b);
            // cout<<lo-v.begin()<<" ";
            // cout<<hi-v.begin()<<endl;
            cout<<hi-lo<<endl;
        }
    }
    return 0;
}