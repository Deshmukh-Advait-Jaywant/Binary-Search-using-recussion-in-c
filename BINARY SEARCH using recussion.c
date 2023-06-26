#include<stdio.h>
int Bsearch();
int main()
{
	int ar[20],n,i,r,key;
	
	printf("enter number of numbers");
	scanf("%d",&n);
	
	printf("enter the numbers");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	printf("enter the element you want to search");
	scanf("%d",&key);
	int low=0,high=n-1;
	r=Bsearch(ar,low,high,key);
	
	if(r==-1)
	{
		printf("element not found");
	}
	else
	{
		printf("element found");
	}
	return 0;
}
int Bsearch(int ar[],int low,int high,int key)
{
		int mid;
	
		mid=(low+high)/2;
		if(key==ar[mid])
		{
			return mid+1;
		}
		else if(key<ar[mid])
		{
			high=mid-1;
			Bsearch(ar,low,high,key);
		}
		else
		{
			low=mid+1;
			Bsearch(ar,low,high,key);
		}
	
	return -1;
}
