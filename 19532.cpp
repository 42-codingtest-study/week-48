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
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  int x = (c * e - b * f) / (a * e - b * d);
  int y = (c * d - a * f) / (b * d - a * e);
  cout << x << " " << y << "\n";
}
