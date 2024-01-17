#include <iostream>

using namespace std;

vecotor< vector<int> > arr[10002];
int isvisited[10002];

vector<int> findAdjacent(int node, int maxNodes) {
    vector<int> adjacent;
    int level = 1;
    while (node > level) {
        node -= level;
        level++;
    }

    // 인접 노드 찾기
    // 좌측 위
    if (node != 1 && level != 1) adjacent.push_back(node + level * (level - 2) - 1);
    // 우측 위
    if (node != level - 1 && level != 1) adjacent.push_back(node + level * (level - 2));
    // 좌측
    if (node != 1) adjacent.push_back(node + level * (level - 1) - 1);
    // 우측
    if (node != level) adjacent.push_back(node + level * (level - 1) + 1);
    // 좌측 아래
    if (level != maxNodes) adjacent.push_back(node + level * (level + 1));
    // 우측 아래
    if (level != maxNodes && node != level) adjacent.push_back(node + level * (level + 1) + 1);

    return adjacent;
}


int main()
{
  int tc;
  for (int t = 0; t< tc; t++)
  {
    int from, to;
    cin>>from >> to;


  }

  return 0;
}