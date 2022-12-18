#include <stdio.h>
int main()
{ double n,v1,v2;
scanf("%lf%lf%lf",&n,&v1,&v2);
if((1.414*n)/v1>=(2*n)/v2)
printf("Elevator");
else printf("Stairs");
return 0;
}
