#include <stdio.h>
int main()
{
    int n,a,b,k;
    scanf("%d%d%d%d",&n,&a,&b,&k);
    int p,q,sum,diff;
    p=n/a;
    q=n/b;
    sum=p+q;
    diff=sum-k;
    if(sum>k)
    {
        printf("Win");
    } else if(diff>=0)
    {
        printf("Win");
    } else 
    {
        printf("Lose");
    }
	return 0;
}
