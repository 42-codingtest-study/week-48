#include <iostream>
#include <vector>

using namespace std;
vector<int> numbers;
int c, n;
int max_value = -100000;
int total = 0;
void DFS(int L, int sum, int tsum)
{
	if(sum+(total-tsum) < max_value)
		return;
	if (sum>c)
		return;
	if(L==n)
	{
		if(sum > max_value)
			max_value = sum;
	}
	else
	{
		DFS(L+1,sum+numbers[L], tsum + numbers[L]);
		DFS(L+1,sum,tsum + numbers[L]);
	}
}
int main()
{
	cin >> c >> n;
	numbers.resize(n+1, 0);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin>>tmp;
		numbers[i] = tmp;
		total+=tmp;
	}
	DFS(0,0,0);
	cout << max_value << endl;
}
