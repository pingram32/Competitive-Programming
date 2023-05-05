#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
const ll INF = 1e18;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;
    vl v(n + 2);
    vl l(n + 2);
    vl r(n + 2);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        l[i] = v[i];
        r[i] = v[i];
    }
    for(int i = 1; i <= n; i++){
        l[i] = __gcd(l[i], l[i - 1]);
    }
    for(int i = n; i > 0; i--){
        r[i] = __gcd(r[i], r[i + 1]);
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ll m;
        if(i - 1 < 1){
            m = r[i + 1];
        }
        else if(i + 1 > n){
            m = l[i - 1];
        }
        else m = __gcd(l[i - 1], r[i + 1]);

        ans = max(m, ans);
    }
    cout << ans;
    return 0;
}
