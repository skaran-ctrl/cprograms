main()
{ int n,a,b,c;
printf("enter a number:");
scanf("%d",&n);
n=a*100+b*10+c*1;
if(n == pow(a,3)+pow(b,3)+pow(c,3))
	printf("%d is armstrong number", n);
else
	printf("%d is not an armstrong number",n);}

