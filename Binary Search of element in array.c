#include<stdio.h>
main()
{
	int arr[10],i,n=7,initial,final,loc=-1,key,mid;
	key=5;
	initial=0;
	final=n-1;
	//taking elements from the user
	printf("Enter the elements:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(initial<=final)
	{
		mid=(initial+final)/2;
		if(arr[mid]==key)
		{
			loc=mid;
			break;
		}
		else if(arr[mid]>key)
		{
			final=mid-1;
		}
		else if(arr[mid]<key)
		{
			initial=mid+1;
		}		
	}
	if(loc!=-1)
		{
			printf("Element found at %d",loc+1);
			
		}
	else
	{
		printf("Element not found");
	}	
}
