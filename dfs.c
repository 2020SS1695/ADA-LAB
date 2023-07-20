#include<stdio.h>
int a[20][20],visited[20],n;
void dfs(int v)
{
	int i;
	visited[v]=1;
	for(i=0;i<n;i++)
	{
		if(a[v][i] && !visited[i])
		{
			printf("\n%d->%d",v,i);
			dfs(i);
		}
	}
}
int main()
{
	int i,j,count=0;
	printf("Enter number of vertices ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			visited[i]=0;
			a[i][j]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	dfs(0);
	for(i=0;i<n;i++)
	{
		if(visited[i])
			count++;
	}
	if(count==n)
	{
		printf("\nGraph is connected\n");
	}
	else
	{
		printf("Graph is disconnected");
	}
	return 1;
}
