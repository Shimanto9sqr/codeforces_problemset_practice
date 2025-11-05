#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
     int n; string g;
     ll hC=0,uC=0;
     cin>>n>>g;
     hC= count(g.begin(),g.end(),'-');
     uC= n-hC;
     ll ans =(hC/2)*(hC-hC/2)*uC;
     cout<<ans<<endl;
}
int main()
{
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}