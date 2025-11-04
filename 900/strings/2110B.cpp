#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
using ll = long long;
 
 
 
void solve(){
    //cout<<"((()))";
    string seq; int depth =0;
    cin>>seq;
    for(int i=1;i<seq.length()-1;i++){
       if(seq[i]=='(') depth++;
       else depth--;
       if(depth<0){
        cout<<"YES\n";
        return;
       }
    }
    if(depth==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

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