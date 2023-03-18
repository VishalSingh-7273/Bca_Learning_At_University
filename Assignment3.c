#include<stdio.h>
int main()
{
	int r,i,bin=0,pr=1;
	printf("Enter a number in decimal: ");
	scanf("%d",&i);
	while(i!=0)
	{
		r=i%2;
		bin=bin+(pr*r);
		pr=pr*10;
		i=i/2;
	}
	printf("Binary of the number is: %d",bin);
}
