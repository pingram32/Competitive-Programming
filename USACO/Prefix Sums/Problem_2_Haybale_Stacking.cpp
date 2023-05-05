#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main(){
    //freopen("stacking.in", "r", stdin);
    //freopen("stacking.in", "r", stdin);
    int n, k;
    cin >> n >> k;
    vl v(n);
    while(k--){
        int a, b;
        cin >> a >> b;
        v[a-1]++;
        if(b + 1 < n){
            v[b]--;
        }
    }
    ll sum = 0;
    vl ps(n);
    for(int i = 0; i < n; i++){
        sum += v[i];
        ps[i] = sum;
    }
    
    sort(ps.begin(), ps.end());
    cout<<ps[n/2];
    return 0;
}
