#include <iostream>
using namespace std; 
#define ll long long
 
int main(){
    ll n,sum =0;
    cin >> n;
    for(int i=0; i<n-1; i++){
        ll a;
        cin >> a;
        sum+=a;
    }
    ll ans;
    ans = ((n*(n+1))/2)-sum;
 
    cout << ans;
 
 
    return 0;
}
