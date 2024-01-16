#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  ll n;
  cin >> n;
  int ans = 0;
  for (ll i = 1; i * i <= n; i++) {
    ans++;
  }
  cout << ans << "\n";
}
