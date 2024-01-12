#include <iostream>
#include <vector>

using namespace std;

void DFS(int x)
{
	if(x == 0)
		return ;
	else
	{
		int print_num;
		print_num = x%2;
		DFS(x/2);
		cout<< print_num;

	}
}


int main()
{
	int n;
	cin >> n;

	DFS(n);
	return 0;
}
