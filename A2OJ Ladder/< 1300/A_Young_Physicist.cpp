#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main(){
    int n;
    cin>>n;
    int x = 0, y = 0, z = 0;
    while(n--){
        int tx, ty, tz;
        cin>>tx>>ty>>tz;
        x+=tx, y+=ty, z+=tz;
    }
    if(x || y || z) cout << "NO";
    else cout<<"YES";
    return 0;
}
