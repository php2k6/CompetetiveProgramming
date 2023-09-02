#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll l, r;
    string ans;
    cin >> l >> r;
    if((l+r)%3==0 ){
        if(l==0 && r==0){
            ans="YES\n";
        }
        else{
            if(l==0 || r==0 || (r*2)<l || (l*2)<r ){
                ans="NO\n";
            }
            else{
                ans="YES\n";
            } 
        } 
    }   
    else {
        cout << "NO\n";
    }
    cout << ans;
}

int main() {
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

}

