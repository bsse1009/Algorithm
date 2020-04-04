#include <bits/stdc++.h>

using namespace std;

int arr[750][750];
int n;

void smallestSumOfTwoRow(int x)
{
	priority_queue<int> q;
	for(int i = 0;i < n;i++)
	{
		q.push(arr[0][i] + arr[x][0]);
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 1;j<n;j++)
		{
			if(arr[0][i] + arr[x][j] < q.top())
			{
				q.pop();
				q.push(arr[0][i] + arr[x][j]);
			}
			else
                break;

		}
	}
	int k = n - 1;
	while(!q.empty())
	{
		arr[0][k--] = q.top();
		q.pop();
	}
};

int main()
{
	while(cin >> n)
	{
		for(int i = 0;i<n;i++)
		{
			for(int j = 0;j<n;j++)
			{
			    cin >> arr[i][j];
			}
			sort(arr[i],arr[i]+n);
		}

		for(int i = 1;i < n;i++)
		{
			smallestSumOfTwoRow(i);
		}

		for(int i = 0;i < n-1;i++)
		{
			cout << arr[0][i] << " ";
		}
		cout <<arr[0][n-1] << endl;
	}
	return 0;
}
