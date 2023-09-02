#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
 
int main() {
	ll t, ans=0, x, mx=0;
	cin >> t;
    for(int i=0; i<t; i++){
        cin >> x;
        mx=max(x, mx);
        ans+=mx-x;
 
    }
    cout << ans ;	
	return 0;
}
 
