#include<stdio.h>
int main()
{
	int n,a[50],i,j,f,l,x,k1,k2,mid;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter X:");
	scanf("%d",&x);
	f=0;
	l=n-1;
	mid=(f+l)/2;
	while(f<=l)
	{
		if(a[mid]==x){
			k1=mid;
			break;
		
		else if(x>a[mid])
			f=mid+1;
		else
			l=mid-1;
		mid=(f+l)/2;
		
		}
	}
	printf("Ans=%d",k1);
	return 0;
}

