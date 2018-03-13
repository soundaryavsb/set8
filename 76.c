#include <stdio.h>

int main(void) {
	int a,i,count;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
}
	if(count==2)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
