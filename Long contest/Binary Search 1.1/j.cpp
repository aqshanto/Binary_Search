#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(int k){
    cout<<"Case "<<k<<": ";
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int mx=0;
    int total=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum=v[i]+v[j];
            int lo=0,hi=n-1,mid;
            while(lo<=hi){
                mid=lo+(hi-lo)/2;
                if(v[mid]<sum){
                    lo=mid+1;
                }else if(v[mid]>=sum){
                    hi=mid-1;
                }
            }
            total+=max(mx,hi-j);
        }
    }
    cout<<total<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    for(int k=1;k<=t;k++){
        solve(k);
    }
    return 0;
}