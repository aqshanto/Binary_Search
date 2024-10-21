#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;

void solve(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int find;
    cin>>find;
    //find the first element index;
    int FirstIndex=-1;
    int lo=0,hi=n-1,mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ar[mid]<ar[mid-1] && ar[mid]<ar[mid+1]){
            FirstIndex=mid;
            break;
        }else if(ar[mid]<ar[hi]){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    // find in first sorted part
    lo=0,hi=FirstIndex,mid;
    bool paisi=false;
    int ans=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ar[mid]==find){
            ans=mid;
            paisi=true;
            break;
        }else if(ar[mid]<find){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    if(paisi){
        cout<<ans<<endl;
    }else{
        //2nd part
        lo=FirstIndex,hi=n-1,mid;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(ar[mid]==find){
                ans=mid;
                break;
            }else if(ar[mid]<find){
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