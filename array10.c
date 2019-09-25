#include<stdio.h>
int biggest(int arr[10],int n)
{
	int i;
	int max=arr[0];
	for(i=0;i<10;i++)
	if(arr[i]>max)
	max=arr[i];
	return max;
}
int main()
{	int arr[]={10,20,30,15,45,15,20,25,17,18};
	int n=sizeof(arr)/sizeof(arr[i]);
	printf("biggest is %d",biggest(arr,n));
	return 0;
}
