#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main(){
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    
    ll n, q;
    cin>>n>>q;
    vector<vector<ll>> cows(n, vector<ll>(3, 0));
    vector<ll> s(3);
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        s[x-1]++;
        for(int j = 0; j < 3; j++){
            cows[i][j] = s[j];
        }
    }
    while(q--){
        ll a, b;
        cin>>a>>b;
        ll c1 = 0, c2 = 0, c3 = 0;
        a == 1 ? cout << cows[b-1][0] <<" "<<cows[b-1][1] <<" "<<cows[b-1][2]<<endl
               : cout << cows[b-1][0] - cows[a-2][0] << " " << cows[b-1][1] - cows[a-2][1] << " " << cows[b-1][2] - cows[a-2][2]<<endl;
        //c1 = cows[b-1][0] - cows[a-2][0];
        //c2 = cows[b-1][1] - cows[a-2][1];
        //c3 = cows[b-1][2] - cows[a-2][2];
    }
    return 0;
}
