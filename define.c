 #define N 10
 main()
 { int arr[N],i,sum=0;
 printf("enter %d integers",N);
 for(i=0;i<N;i++)
 scanf("%d",&arr[i]);
 for(i=0;i<N;i++)
 if(arr[i]%2==0)
 sum=sum+arr[i];
 printf("sum=%d",sum);
 }
