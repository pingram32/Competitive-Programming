#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main(){
    int n, x;
    cin>>n>>x;
    vl v(n);
    for(int i = 0; i <= n; i++){
        cin>>v[i];
    }
    vl sum(n+1);
    map<ll, ll> m;
    for(int i = 1; i <= n; i++){
        sum[i]+=v[i-1];
        sum[i]+=sum[i-1];
        //cout<<sum[i]<<" ";
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        if(m.count(sum[i]-x)){
            ans+=m[sum[i]-x]
        }   
        if(x == sum[i]){
            ans++;
        }
        m[sum[i]]++
    }
    cout<<ans;
    return 0;
}
