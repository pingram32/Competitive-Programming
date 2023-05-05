#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
const ll INF = 1e18;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vl sum(n + 1);
        for(int i = 1; i <= n; i++){
            char x;
            cin >> x;
            int t = x - '0';
            sum[i] += sum[i - 1];
            sum[i] += t;
            //cout<<sum[i]<<" ";
        }
        map<ll, ll> m;
        ll ans = 0;
        for(int i = 0; i <= n; i++){
            if(m.count(sum[i] - i)){
                ans += m[sum[i] - i];
            }
            m[sum[i] - i]++;
        }

        cout<<ans<<endl;
    }
    
    return 0;
}
