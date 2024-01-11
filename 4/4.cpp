#include <iostream>
#include <vector>

using namespace std;
vector<int> numbers;
int total;
int n;

void DFS(int L, int sum)
{
	if (sum > total/2)
		return;
	if(L == n)
	{
		if (sum == (total-sum))
		{
			cout << "YES" << endl;
			exit(0);
		}
	}
	else
	{
		DFS(L+1, sum + numbers[L]);
		DFS(L+1, sum);
	}
}

int main()
{
	cin >> n;
	total = 0;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		numbers.push_back(input);
		total += input;
	}

	DFS(0,0);
	cout << "NO" <<endl;
	return 0;
}
