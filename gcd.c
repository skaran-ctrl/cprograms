int gcd(int a,int b)
{ if(a>b)
 return(a-b,b);
 else if(b>a)
 return(a,b-a);
 else
 return a;
}
main()
{ int a,b,g;
printf("enter two numbers");
scanf("%d %d",&a,&b);
g=gcd(a,b);
printf("gcd=%d",g);
}
