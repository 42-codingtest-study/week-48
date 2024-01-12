#include <iostream>
#include <vector>

using namespace std;

int n;

void DFS(int x)
{
	if(x > n)
		return;
	else
	{
		cout << x << " ";
		DFS(x * 2);
		DFS(x * 2 + 1);

	}

}
int main()
{
	cin >> n;

	DFS(1);
	return 0;
}
