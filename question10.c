#include <stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    
    int x1=x,y1=y;
if(x1 == y1){
    x = n; y = n;
}else{
    if(x1 > y1){
        if(k % 4 == 1){
        x = n; y = n - x1 + y1;
        }else if(k % 4 == 2){
        x = n - x1 + y1; y = n; 
        }else if(k % 4 == 0){
        x = x1 - y1; y = 0;
        }else{
        x = 0; y = x1 - y1;
        }
        }else{
        if(k % 4 == 1){
        x = n + x1 - y1; y = n;
        }else if(k % 4 == 2){
        x = n; y = n + x1 - y1;
        }else if(k % 4 == 0){
        x = 0; y = y1 - x1;
        }else{
        x = y1 - x1; y = 0;
        }
    }
}   
printf("%d %d",x,y);
    
 

	return 0;
}
