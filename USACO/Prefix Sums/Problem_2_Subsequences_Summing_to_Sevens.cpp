#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main(){
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);

    int n;
    cin>>n;
    map<int, int> m;
    ll sum = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        sum += x;
        if(m.count(sum % 7)){
            //cout<<i<<" "<<sum%7<<" "<<m[sum%7]<<endl;
            ans = max(i-m[sum%7], ans);
        }
        else{
            m[sum % 7] = i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
