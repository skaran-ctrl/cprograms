int fb(int n)
{ if(n==1)
return 0;
else if(n==2)
return 1;
else
return fb(n-1)+fb(n-2);
}
main()
{ int n,i;
printf("how many numbers");
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("%d",fb(i));
}
