main()
{ int n;
for(n=1;n<=10;n++)
{ if(n%2==1)
printf("%d",n*n);
else
printf("%d",fact(n));
}
}
int fact(int n)
{if(n==1)
return 1;
else
return n*fact(n-1);
}
