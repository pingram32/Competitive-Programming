#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        sum+=x;
    }
    int ans = 0;
    for(int i = 1; i <= 5; i++){
        int t = sum + i;
        if(t % (n + 1) != 1) ans++;
    }
    cout<<ans;
    return 0;
}
