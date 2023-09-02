#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
void solve(){
    ll x, y, ans;
    cin >> x >> y;
    if(x<y){
        if(y%2==1){
            ans=(y*y)-x+1;
        }
        else {
            ans=(((y-1)*(y-1))+x); 
        }
 
    }else if(x>y){
        if(x%2==1){
            ans=(((x-1)*(x-1))+y);
        }
            else {
            ans=(x*x)-y+1;
        }
    }else{
        ans=(x*x)-(x-1);
    }
    cout << ans << endl;
}
 
int main() {
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
 
}
