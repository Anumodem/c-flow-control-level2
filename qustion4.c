#include <stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    float per;
    int sum;
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    per=sum/(float)5;
    if(per>=90)
    printf("%.2f Percent\nGrade A",per);
    else if(per>=80)
    printf("%.2f Percent\nGrade B",per);
    else if(per>=70)
    printf("%.2f Percent\nGrade C",per);
    else if(per>=60)
    printf("%.2f Percent\nGrade D",per);
    else if(per>=40)
    printf("%.2f Percent\nGrade E",per);
    else 
    printf("%.2f Percent\nGrade F",per);
    	return 0;
}
