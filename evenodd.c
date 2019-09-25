main()
{ int a,b,n;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
n=a;
while(n<=b)
{ if(n%2==0)
printf("%d",n);
n++;
}
}
