#define N 10
void main()
{	int i,j,start,last,mid,found=0;
	char str[N][51],ss[51],temp[51];
	printf("enter %d strings:",N);
	for(i=0;i<N;i++)
		gets(str[i]);
	
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
		if(strcmp(str[i],str[j])>0)
		{
			strcpy(temp,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],temp);
		}
	printf("sorted string:");
	for(i=0;i<N;i++)
	  puts(str[i]);
	printf("enter string to search:");
	gets(ss);
	start=0;
	last=N;
	while(1)
	{
		mid=(start+last)/2;
		if(strcmp(ss,str[mid])==0)
		{ found=1;
		 break;
		}
		else if(mid==0||mid==N)
		break;
		else if(strcmp(ss,str[mid])<0)
		last=mid-1;
		else if(strcmp(ss,str[mid])>0)
		start=mid+1;
	}
	if(found)
	printf("%s string found at %d",ss,mid);
	else
	printf("%s string not found",ss);
}
