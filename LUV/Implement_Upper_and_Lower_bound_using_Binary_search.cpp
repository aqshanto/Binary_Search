#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

int low_bound(vector<int>&v, int element){
    int lo=0,hi=v.size()-1;
    int mid;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(v[mid]<element){
            lo=mid+1;
        }else{
            hi=mid;
        }
    }
    if(v[lo]>=element) return lo;
    if(v[hi]>=element) return hi;
    return -1;
}

int up_bound(vector<int>&v, int element){
    int lo=0,hi=v.size()-1;
    int mid;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(v[mid]<=element){
            lo=mid+1;
        }else{
            hi=mid;
        }
    }
    if(v[lo]>element) return lo;
    if(v[hi]>element) return hi;
    return -1;
}

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int element;
    cin>>element;
    int lb=low_bound(v,element);
    int ub=up_bound(v,element);
    cout<<lb<<" "<<(lb!=-1? v[lb]: -1)<<endl;
    cout<<ub<<" "<<(ub!=-1? v[ub]: -1)<<endl;
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