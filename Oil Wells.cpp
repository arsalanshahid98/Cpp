#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
static int input[2000000],S1[2000000],S2[2000000],S3[2000000];

int randommin(int rdm)
	{
    long minvalue=0;
    time_t t;
    srand((unsigned) time(&t));
    
    if(rdm<=30000)
    	{
        minvalue=rand()%(rdm-1);
        return minvalue;
    	}
    else
    	{
        while(rdm>30000)
        	{
            minvalue += rand()%30000;
            rdm=rdm-30000;
        	}
        	
        minvalue += rand()%(rdm-1);
        return minvalue;
    	}
	}


void sort(int n,int* a)
	{
    int i,temp,j;
    for(i=0;i<n;i++)
		{
        for(j=i+1;j<n;j++)
			{
            if(a[i] > a[j])
				{
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            	}
        	}
    	}
	}

long select(int k,int* S,int num)
	{
    int vm = 0,m = 0,i,n1=0,n2=0,n3=0;
    
    if(num < 38)
		{
        sort(num,S);
        return S[k-1];
    	}
    else
		{ 
        vm = randommin(num);
        m = S[vm];
        n1 = n2 = n3 = 0;
        
        for(i=0;i<num;i++)
            if(S[i] < m)
				{
                S1[n1] = S[i];
                n1++;
            	}
            else if(S[i] == m)
				{
                S2[n2] = S[i];
                n2++;
            	}
            else
				{
                S3[n3] = S[i];
                n3++;
            	}
        if(n1 >= k) return(select(k,S1,n1));
        else if(n1 + n2 >= k) return m;
        else return(select(k - n1 - n2,S3,n3));
    	}
	}


int main()
	{
    int x;
    long result = 0;
    long n = 0;
    long k = 0;
    long i = 0;
    
    while(scanf("%d,%d",&x,&input[i]) != EOF)
		{
        i++,n++;
    	}
    
    k = (n + 1)/2;
    result = select(k,input,n);
    printf("%ld\n",result);
	}

