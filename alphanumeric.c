int sumdigit(char str[])
{ int i=0,sum=0;
while(str[i])
{ if(isdigit(str[i])
sum=sum+str[i]-'0';
i++;

}
return sum;

}
main()
{ char str[100];
int s;
printf("enter an alphanumeric string:");
gets(str);
s=sumdigit(str);
printf("sum of digits=%d",s);
}
