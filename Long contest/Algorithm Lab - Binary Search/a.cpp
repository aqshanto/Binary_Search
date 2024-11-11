#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(i==0){
            mx=v[0];
        }else
            mx=max(mx,abs(v[i]-v[i-1]));
    }
    int x=mx;
    for(int i=0;i<n;i++){
        if(i==0){
            if(mx==v[0]){
                mx--;
            }
        }else if(mx==abs(v[i]-v[i-1])){
            mx--;
        }else if(mx<abs(v[i]-v[i-1])){
            x++;
            break;
        }
    }
    cout<<x<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}