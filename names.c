main()
{ char names[5][51];
int i;
printf("enter 5 names:");
for(i=0;i<5;i++)
gets(names[i]);
printf("given names are:");
for(i=0;i<5;i++)
puts(names[i]);
}
