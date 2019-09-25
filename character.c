#include<stdio.h>
main()
{
char x,y,z,p;
printf("enter first character:");
x=getch();
printf("enter second character:");
y=getche();
printf("enter third character:");
z=getchar();
printf("enter fourth character:");
fflush(stdin);
scanf("%c",&p);
printf("%c %c %c %c",x,y,z,p);
}
