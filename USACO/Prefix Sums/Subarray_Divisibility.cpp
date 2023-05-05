#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
 
int main(){
    int n;
    cin >> n;
    vl sum(n + 1);
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        sum[i] += sum[i - 1];
        sum[i] += x;
    }
    map<ll, ll> m;
    ll ans = 0;
    for(int i = 0; i <= n; i++){
        int num = (sum[i] % n + n) % n;

        if(m.count(num)){
            ans+=m[num];
        }
        m[num]++;
    }
    cout<<ans;
    return 0;
}