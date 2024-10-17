#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
int sum_of_digit(int n){
    int ans=0;
    while(n!=0){
        int digit=n%10;
        n/=10;
        ans+=digit;
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    int N=1e8;
    int cnt=0;
    for(int i=1;i<=N;i++){
        if(sum_of_digit(i)==10){
            cnt++;
        }
        if(cnt==n){
            cout<<i<<endl;
            break;
        }
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