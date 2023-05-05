#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m;
    cin>>n>>m;
    multiset<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        auto t = s.upper_bound(x); 

        if (t == s.begin()){
            cout<<"-1"<<endl;
        }
        else{
            t--;
            cout<<*t<<endl;
            s.erase(t);
        }
    }
    
    return 0;
}
