#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < m; i++){
        cin>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 0;
    int index = 0;
    for(int i = 0; i < n; i++){
        while(a[i] + k > b[index] && a[i] - b[index] > k && index < m)
            index++;
        if(abs(a[i] - b[index]) <= k){
            ans++;
            index++;
        }
        if(index == m){
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}
