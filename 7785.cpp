#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  map<string, bool> m;
  int n;
  cin >> n;
  while (n--) {
    string name, status;
    cin >> name >> status;
    if (status == "enter")
      m[name] = true;
    else
      m[name] = false;
  }
  for (auto it = m.rbegin(); it != m.rend(); it++) {
    if (it->second) cout << it->first << "\n";
  }
}
