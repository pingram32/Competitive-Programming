#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main(){
    int x, y;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int k;
            cin>>k;
            if(k) y = i, x = j;
        }
    }
    cout<<abs(2-x)+abs(2-y);
    return 0;
}
