int factorial(int n)
{ if(n==1)
return 1;
else
return n*factorial(n-1);
}
main()
{ int n,f;
printf("enter a no");
scanf("%d",&n);
f=factorial(n);
printf("factorial=%d",f);
}
