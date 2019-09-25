#define N 10
main()
{
	int ar[N],i,j,start,end,mid,temp,n,found=0;
	printf("Enter %d numbers : ",N);
	for(i=0;i<N;i++)
	  scanf("%d",&ar[i]);
	for(i=0;i<N;i++)
	 for(j=i+1;j<N;j++)
		if(ar[i]>ar[j])
		{
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}
	printf("Data is : ");
	for(i=0;i<N;i++)
	 printf("%d ",ar[i]);
	printf("\nEnter item to search : ");
	scanf("%d",&n);
	start=0;
	end=N;
	while(1)
	{
		mid=(start+end)/2;
		if(ar[mid]==n)
		{
			found=1;
			break;
		}
		else if(mid==0 || mid==N)
		  break;
		else if(n<ar[mid])
		  end=mid-1;
		else if(n>ar[mid])
		  start=mid+1;
	}
	if(found)
	  printf("%d found at index %d",n,mid);
	else
	  printf("%d not found",n);
}
