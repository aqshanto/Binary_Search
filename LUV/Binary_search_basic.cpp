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
    int to_find;
    cin>>to_find;
    int low= 0,high=n-1,mid;
    while(high-low>1){
        mid=(low+high)/2;
        if(v[mid]<to_find){
            low=mid+1;
        }else{
            high=mid;
        }
    }
    if(v[low]==to_find){
        cout<<low<<endl;
    }else if(v[high]==to_find){
        cout<<high<<endl;
    }else{
        cout<<"NOT Found"<<endl;
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