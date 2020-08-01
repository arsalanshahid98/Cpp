#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

class Interval
	{
	public:
	    int a, b;
	
	    bool operator < (const Interval& x) const {
	        if (b != x.b)
	            return b < x.b;
	        return a < x.a;
	    }
	} *intervals;

int main() 
	{
    int N, i, last_finished;

    scanf("%d", &N);
    intervals = new Interval[N];
    for (i = 0; i < N; i++)
        scanf("%d %d", &intervals[i].a, &intervals[i].b);

    sort(intervals, intervals + N);
    queue <int> opt;
    
    for (i = 0, last_finished = 0; i < N; i++)
        if (intervals[i].a >= last_finished)   
			{
            opt.push(i);
            last_finished = intervals[i].b;
        	}
        	
    printf("%d\n", opt.size());
    return 0;
	}
