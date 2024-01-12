#include <iostream>
#include <vector>

using namespace std;
int n;
vector<int> check;

void DFS(int L, vector<int> &check)
{
	if(L == n+1)
	{
		for(int i = 1; i <= n; i++)
		{
			if(check[i]==1)
				cout << i << " ";
		}
		cout << endl;
	}
	else if(L <= n)
	{
		check[L] = 1;
		DFS(L+1, check);
		check[L] = 0;
		DFS(L+1, check);

	}
}
int main()
{

	cin >> n;
	check.resize(n+1,0);
	DFS(1, check);
	return 0;
}


