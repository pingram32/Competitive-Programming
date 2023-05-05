#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main(){
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);

    int n;
    cin>>n;
    vector<vector<ll>> sum(n+1, vector<ll>(3,0));
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 3; j++){
            sum[i][j] += sum[i-1][j];
        }
        char x;
        cin>>x;
        if(x == 'H'){
            sum[i][0]++;
        }
        else if(x == 'P'){
            sum[i][1]++;
        }
        else{
            sum[i][2]++;
        }
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ll wins1 = max(sum[i][0], max(sum[i][1], sum[i][2]));
        ll wins2 = max(sum[n][0]-sum[i][0], max(sum[n][1]-sum[i][1], sum[n][2]-sum[i][2]));
        ans = max(ans, wins1 + wins2);
    }
    cout<<ans;
    return 0;
}
