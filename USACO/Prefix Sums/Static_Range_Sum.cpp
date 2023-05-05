#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, q;
    cin>>n>>q;
    vector<ll> v(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        sum += x;
        v[i] = sum;
    }

    while(q--){
        int l, r;
        cin>>l>>r;
        l == 0 ? cout<<v[r-1]<<endl : cout<<v[r-1]-v[l-1]<<endl;
    }
    return 0;
}
