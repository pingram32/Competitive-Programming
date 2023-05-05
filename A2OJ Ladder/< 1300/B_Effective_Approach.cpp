#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main(){
    map<int, int> m;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        m[x] = i;
    }
    ll q, v = 0, p = 0;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        v+= m[x] + 1;
        p+= n - m[x] ;
    }
    cout<<v<<" "<<p;
    return 0;
}
