#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    int n; string s; bool isExist= false;
    cin>>n>>s;
    vector<int>count(26,0);
    for(int i=0;i<n;i++){
        int c= s[i]-'a';
        count[c]++;
        if(count[c]>=3){
            cout<<"YES\n";
            return;
        }
    }
    for(int i=0;i<26;i++){
        if(count[i]==2 && !(s[i]==s[0] && s[i]==s[n-1])){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
   

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