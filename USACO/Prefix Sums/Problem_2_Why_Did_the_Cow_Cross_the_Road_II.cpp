#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
const ll INF = 1e18;

int main(){
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);

    int n, k, b;
    cin >> n >> k >> b;

    vl sum(n+1);
    ll ans = INF;
    for(int i = 1; i <= b; i++){
        int x;
        cin >> x;
        sum[x]++;
    }
    for(int i = 1; i <= n; i++){
        sum[i] += sum[i - 1];
    }

    ll f = 0;
    for(int i = k; i <= n; i++){
        ans = min(ans, sum[i] - sum[f]);
        f++;
    }
    cout<<ans;
    return 0;
}
