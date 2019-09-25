int biggest(int *arr,int n)
{ int max,i;
max=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max)
 max=arr[i];}
return max;
}
main()
{ int arr[]
={1,2,3,4,4,4,4,4,5,5};
int max=biggest(arr,10);
printf("biggest=%d",max);
}
