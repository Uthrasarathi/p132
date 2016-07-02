#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int x1,x2,y1,y2,n,m,u;
printf("Enter x1 and x2 value\n");
scanf("%d%d",&x1,&x2);
printf("Enter y1 and y2 value\n");
scanf("%d%d",&y1,&y2);
m=abs(x1+x2);
u=abs(y1+y2);
n=abs((m*m)+(u*u));
printf("%d",n);
getch();
}
