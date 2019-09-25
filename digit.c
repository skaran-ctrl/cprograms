main()
{ char str[51];
int i=0;
printf("enter a string:");
gets(str);
while(str[i]!='\0')
{
if(isdigit(str[i]))

printf("%c",str[i]);
i++;
}
}
