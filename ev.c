main()
{ int a,b,c,g;
printf("enter three number");
scanf("%d %d %d",&a,&b,&c);
g=(a>b&&a>c)?a:b>c?b:c;
printf("%d is bigger",g);
}
