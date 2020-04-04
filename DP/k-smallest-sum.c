#include<queue>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int num[1000][1000];
int n;

void merge(int x)
{
	priority_queue<int> q;
	for(int i = 0;i < n;i++)
	{
		q.push(num[0][i] + num[x][0]);
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = 1;j<n;j++)
		{
			if(num[0][i] + num[x][j] < q.top())
			{
				q.pop();
				q.push(num[0][i] + num[x][j]);
			}
			else
			{
				break;
			}
		}
	}
	int k = n - 1;
	while(!q.empty())
	{
		num[0][k--] = q.top();
		q.pop();
	}
};

int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		for(int i = 0;i<n;i++)
		{
			for(int j = 0;j<n;j++)
			{
			    scanf("%d",&num[i][j]);
			}
			sort(num[i],num[i]+n);
		}

		for(int i = 1;i < n;i++)
		{
			merge(i);
		}

		for(int i = 0;i < n-1;i++)
		{
			printf("%d ",num[0][i]);
		}
		printf("%d\n",num[0][n-1]);
	}
	return 0;
}
