#include <stdio.h>
int main()
{
    int n,count=0;
    int x;
    scanf("%d",&n);
    if(n%5==0){
        x=n/5;
        count++;
        printf("%d",count);
    }else{
        x=n/5+1;
        printf("%d",x);}
    

	return 0;
}
