#include <stdio.h>
int main()
{
    int s,w1,w2,w3;
    scanf("%d %d %d %d",&s,&w1,&w2,&w3);
    if ((w1+w2+w3)<=s){
    printf("1");}
    else if (((float)(w1+w2+w3)/2)>1){
        printf("2");
    }else
    {
        printf("2");
    }
 	return 0;
}
