#include<iostream>
using namespace std;
#define MAX 9

int N, M;
int arr[MAX] = { 0 };
bool varr[MAX] = { 0 };

void dfs(int cnt)
{
	if (cnt == M) // M이 cnt와 같으면 return 
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1; i <= N; i++)
	{
		if (!varr[i])
		{
			varr[i] = true;
			arr[cnt] = i;
			dfs(cnt + 1);
			varr[i] = false;
		}
	}


}

int main()
{
	cin >> N >> M;
	dfs(0);
}