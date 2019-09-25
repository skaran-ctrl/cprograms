#define N 10
void main()
{	int arr[N],n,i,j,start,last,mid,temp,found=0;
	printf("enter %d elements:",N);
	for(i=0;i<N;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	printf("sorted data:");
	for(i=0;i<N;i++)
	printf("%d",arr[i]);
	printf("enter element to search:");
	scanf("%d",&n);
	start=0;
	last=N;
	while(1)
	{
		mid=(start+last)/2;
		if(arr[mid]==n)
		{ found=1;
		 break;
		}
		else if(mid==0||mid==N)
		break;
		else if(n<arr[mid])
		last=mid-1;
		else (n>arr[mid])
		start=mid+1;
	}
	if(found)
	printf("%d element found at %d",n,mid);
	else
	printf("%d element not found",n);
}
