main()
{ int n,i,*p,sum=0;
	printf("how many numbers");
	scanf("%d",&n);
	p=malloc(n*sizeof(int));
	printf("enter %d numbers:",n);
	for(i=0;i<n;i++)
	{ scanf("%d",&p[i]);
	sum=sum+p[i];
	}
	printf("sum=%d",sum);
}
