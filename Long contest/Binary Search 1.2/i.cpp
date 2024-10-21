#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
double pi= 3.141592653589793238462643383279;
const int N=1e6+1;

void solve(){
    vector<bool>v(N,0);
    for(int i=2;i<=sqrt(N)+1;i++){
        if(!v[i]){
            for(int j=i*i;j<=N;j+=i){
                v[j]=true;
            }
        }
    }
    set<int>st;
    for(int i=2;i<=N;i++){
        if(!v[i]){
            st.insert(i*i);
        }
    }
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        if(st.find(num)!=st.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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