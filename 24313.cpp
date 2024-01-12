#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long

int main() {
    fast;
    int a1, a2, c, n0;
    cin >> a1 >> a2 >> c >> n0;
    cout << (a1 * n0 + a2 <= c * n0 && a1 <= c ? "1" : "0");
}
