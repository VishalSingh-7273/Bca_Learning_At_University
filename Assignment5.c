#include<stdio.h>
int main()
{
	int max,fail=0,pass=0,ab=0;
	int marks[50];
	int i,n,rl;
	printf("Enter number of students: ");
	scanf("%d",&n);
	printf("Enter marks of %d students: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	max=marks[0];
	rl=1;
	for(i=0;i<n;i++)
	{
		if(marks[i]>max)
		{
			max=marks[i];
			rl=i+1;
		}
		if(marks[i]==-1)
		{
			ab=ab+1;
		}
		else if(marks[i]>=50)
		{
			pass=pass+1;
		}
		else
		{
			fail=fail+1;
		}
	}
	printf("Number of Passed Students are: %d\n",pass);
	printf("Number of Failed Students are: %d\n",fail);
	printf("Number of Absent Students are: %d\n",ab);
	printf("Highest marks Scored by Roll no. %d i.e: %d",rl,max);
}
