#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i = 0 ;i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int r = n - 1, l = 0;
    ll ans = 0;
    while(l < r){
        if(v[l] + v[r] > x){
            r--;
        }
        else if(v[l] + v[r] < x){
            ans++;
            l++;
            r--;
        }
        else{
            ans++;
            l++;
            r--;
        }
    }
    cout<<ans + (v.size()-(ans*2))<<endl;
    
    return 0;
}
