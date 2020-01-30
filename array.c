#include<stdio.h>
void main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		
			printf("\n enter the inpput for index %d",i);
			scanf("%d",&a[i]);
		
	}
	printf("array elements are as follows\n");
	for(i=0;i<10;i++){
	printf("%d \n",a[i]);
}
}
