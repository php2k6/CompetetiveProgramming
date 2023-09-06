#include <iostream>
#include <string>
#define ll long long
using namespace std;

int ans;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if((a+b+c)>=2){
        ans++;

    }
}

int main() {
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    cout << ans;
    return 0;
}

