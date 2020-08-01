#include <stdio.h>
#include <string.h>
 
int main()
{
    int a[20001],b[20001];
    int ans[20001]={0};
    int i,j,tmp;
    char s1[20001],s2[20001];
    scanf(" %s",s1);
    scanf(" %s",s2);
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    
	for(i = l1-1,j=0;i>=0;i--,j++)
    {
    a[j] = s1[i]-'0';
    }
    
	for(i = l2-1,j=0;i>=0;i--,j++)
    {
    b[j] = s2[i]-'0';
    }
    
	for(i = 0;i < l2;i++)
    {
    for(j = 0;j < l1;j++)
    {
    ans[i+j] += b[i]*a[j];
    }
    }
    
    for(i = 0;i < l1+l2;i++)
    {
    tmp = ans[i]/10;
    ans[i] = ans[i]%10;
    ans[i+1] = ans[i+1] + tmp;
    }
    
    for(i = l1+l2; i>= 0;i--)
    {
    if(ans[i] > 0)
    break;
    }
    
    printf("");
    for(;i >= 0;i--)
    {
    printf("%d",ans[i]);
    }
    
    return 0;
}
