int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
}
main()
{ int n,i,fact=1;
printf("how many numbers:");
scanf("%d",&n);
i=0;
while(i<=n)
{
 printf("%d",factorial(i));
 i++;
}
}
