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
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<q;i++){
            int lower,higher;
            cin>>lower>>higher;
            if(lower==higher){
                cout<<0<<endl;
                continue;
            }
            // find lower bound
            int lo=0,hi=n-1,mid;
            int lans,hans;
            while(lo<=hi){
                mid=(lo+hi)/2;
                if(ar[mid]>=lower && (ar[mid-1]<lower || mid==lo)){
                    lans=mid;
                    break;
                }else if(ar[mid]>lower){
                    hi=mid-1;
                }else{
                    lo=mid+1;
                }
            }
            //upper
            lo=0,hi=n-1,mid;
            // while(lo<=hi){
            //     mid=(lo+hi)/2;
            //     if(ar[mid]<=higher && (ar[mid+1]>higher || mid==hi)){
            //         hans=mid;
            //         break;
            //     }else if(ar[mid]>higher){
            //         hi=mid-1;
            //     }else{
            //         lo=mid+1;
            //     }
            // }
            while(lo<=hi){
                mid=(lo+hi)/2;
                if(ar[mid]<=higher && (ar[mid+1]>higher || mid==hi)){
                    hans=mid;
                    break;
                }else if(ar[mid]>higher){
                    hi=mid-1;
                }else{
                    lo=mid+1;
                }
            }
            cout<<lans<<" "<<hans<<endl;
            if(hans==lans)cout<<0<<endl;
            else cout<<(hans-lans)+1<<endl;
        }
    }
    return 0;
}