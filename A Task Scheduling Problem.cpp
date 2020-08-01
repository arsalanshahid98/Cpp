#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;

struct node
	{
	int date;
	int cost;
	};
 
bool cmp(node xx, node yy)
	{
	if (xx.cost != yy.cost)
		return xx.cost > yy.cost;
	else
		return xx.date < yy.date;
	}
 
int main()
	{
	int n;
	node s[10000];
	while (cin >> n)
		{
		for (int i = 0; i < n; i++)
			cin >> s[i].date;
		
		for (int i = 0; i < n; i++)
			{
			cin >> s[i].cost;
			}
			
		sort(s, s + n, cmp);
		int cnt = 0;
		int vis[1000] = { 0 };
		
		for (int i = 0; i < n; i++)
			{
			if (vis[s[i].date] == 0)
				{
				vis[s[i].date] = 1;
				}
			else
				{
				int flag = 0;
				for (int j = s[i].date; j >= 1; j--)
					{
					if (vis[j] == 0)
						{
						vis[j] = 1;
						flag = 1;
						break;
						}
					}
				if (flag == 0)
					{
					cnt += s[i].cost;
					}
				}
			}
		cout << cnt << endl;
		}
	return 0;
	}

