#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long

int main() {
    fast;
    int visited[301][301], t;
    int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    cin >> t;
    while (t--) {
        int l, x, y, nx, ny;
        cin >> l >> x >> y >> nx >> ny;
        memset(visited, 0, sizeof(visited));
        visited[x][y] = 1;
        vector<pair<int, int>> q;
        q.push_back({x, y});
        while (!q.empty()) {
            int cx = q.front().first;
            int cy = q.front().second;
            q.erase(q.begin());
            if (cx == nx && cy == ny) {
                cout << visited[cx][cy] - 1 << '\n';
                break;
            }
            for (int i = 0; i < 8; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
                if (visited[nx][ny] != 0) continue;
                visited[nx][ny] = visited[cx][cy] + 1;
                q.push_back({nx, ny});
            }
        }
    }
}
