#include <iostream>
#include<stdio.h>

int main()
	{
    int T, N,CurrentTest=1;
    scanf("%d",&T);
    
	while (CurrentTest <= T)
		{
        scanf("%d",&N);
        float graph[N][N];
        float p[N - 2];
        
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                scanf("%f",&graph[i][j]);

        for (int i = 0; i < N - 2; i++)
            scanf("%f",&p[i]);

        for (int i = 0; i < N; i++)
            for (int j = i + 1; j < N; j++)
                if (j - 1 < N - 2)
                    graph[i][j] *= p[j - 1];
       
        for (int i = 0; i < N; i++)
            for (int j = i+1; j < N; j++)
                for (int k = i+1; k < j; k++)
                    if (graph[i][k] * graph[k][j] > graph[i][j])
                        graph[i][j] = graph[i][k] * graph[k][j];
                    

        if (graph[0][N - 1] == 0 || graph[0][N-1]<0.0001)
            printf("Case %d: Cannot reach!\n",CurrentTest);
        else
   			printf("Case %d: %.4f\n",CurrentTest, graph[0][N - 1]);
   			
        CurrentTest++;
    	}
	}

