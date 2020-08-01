#include<iostream>
using namespace std;
static const int MAX = 100;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int N, M[MAX][MAX];

int prim()
	{
	int u, minv;
	int d[MAX], p[MAX], color[MAX];
	
	for(int i = 0; i < N; i++)
		{
		d[i] = INFTY;
		p[i] = -1;
		color[i] = WHITE;
		}
	
	d[0] = 0;
	
	while(1)
		{
		minv = INFTY;
		u = -1;
		for(int i = 0; i < N; i++)
			{
			if(minv > d[i] && color[i] != BLACK)
				{
				u = i;
				minv = d[i];
				}
			}
		if(u == -1) break;
		color[u] = BLACK;
		for(int v = 0; v < N; v++)
			{
			if(color[v] != BLACK && M[u][v] != INFTY)
				{
				if(d[v] > M[u][v])
					{
					d[v] = M[u][v];
					p[v] = u;
					color[v] = GRAY;
					}
				}
			}
		}
	int sum = 0;
	for(int i = 0; i < N; i++)
		{
		if(p[i] != -1) sum += M[i][p[i]];
		}
	
	return sum;
	} 

int main()
	{
	cin>>N;
	
	for(int i = 0; i < N; i++)
		{
		for(int j = 0; j < N; j++)
			{
			int e; cin>>e;
			M[i][j] = (e == -1) ? INFTY : e;
			}
		}
	
	cout<<prim()<<endl;
	
	return 0;
}
