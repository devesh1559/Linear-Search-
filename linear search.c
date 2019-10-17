#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int i;
int a[MAX];
void search(int a[MAX],int x)
{
	int i;
	for(i=0;i<MAX;i++)
	{
		if(a[i]==x)
		{
			printf("Element found");
			return;
		}

	}
	printf("Element Not Found");
	
}
int main()
{
	int i;
	printf("Enter Elements");
	for(i=0;i<MAX;i++)
	{
	scanf("%d",&a[i]);
	}
	int x;
	printf("Enter Element To be Searched");
	scanf("%d",&x);
	search(a,x);
}


	
