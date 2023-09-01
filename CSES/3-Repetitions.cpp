#include <iostream>

using namespace std;
#define ll long long

int main() {
  string a;
  cin >> a;
  int c = 0, ans = 1;
  char l = 'A';
  for (char b: a) {
    if (b == l) {
      c++;
      ans = max(c, ans);

    } else {
      l = b;
      c = 1;
    }
  }
  cout << ans;

  return 0;
}
