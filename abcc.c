main()
{ int a,b,n,temp,i;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
if(a>b)
{ temp=a;
a=b;
b=temp;
}
for(n=a;n<=b;n++)
{ for(i=1;i<=10;i++)
printf("%d*%d=%d\n",n,i,n*i);
}
}
