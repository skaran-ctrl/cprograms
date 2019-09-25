main()
{ int n,d,sum;
printf("enter a number");
scanf("%d,&n");
while(n>0)
{ d=n%10;
sum=sum+d;
n=n/10;
}
printf("sum of digits=%d",sum);
}
