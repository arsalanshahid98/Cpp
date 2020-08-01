#include <iostream>
#define INF 99999999
using namespace std;

int y[101][101];

int main()
	{
    int P;
    int unused __attribute__((unused));
    while (scanf("%d", &P) && P)
		{
        for (int q = 1; q <= P; ++q)
			{
            for (int r = 1; r <= P; ++r)
                y[q][r] = INF;
            y[q][q] = 0;
       		}

        for (int q = 1; q <= P; ++q)
			{
            int t, x, w;
            unused = scanf("%d", &t);
            for (int r = 0; r < t; ++r)
				{
                unused = scanf("%d %d", &x, &w);
                y[q][x] = w;
            	}
        	}

        for (int k = 1; k <= P; ++k)
            for (int q = 1; q <= P; ++q)
                for (int r = 1; r <= P; ++r)
                    if (y[q][k] + y[k][r] < y[q][r])
                        y[q][r] = y[q][k] + y[k][r];

        int Min = INF;
        int Min_pos;
        bool Disjoint = true;
        for (int q = 1; q <= P; ++q)
			{
            int Max_length = 0;
            bool Reachable = true;
            for (int r = 1; r <= P; ++r)
				{
                if (y[q][r] == INF)
					{
                    Reachable = false;
                    break;
                	}
                else if (y[q][r] > Max_length)
                    Max_length = y[q][r];
            	}
            if (Reachable == true)
				{
                Disjoint = false;
                if (Max_length < Min)
					{
                    Min = Max_length;
                    Min_pos = q;
                	}
            	}
        	}
        if (Disjoint) puts("disjoint");
        else printf("%d %d\n", Min_pos, Min);
    	}
	}
