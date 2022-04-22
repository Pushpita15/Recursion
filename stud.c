#include<stdio.h>
typedef struct{
	char name[20];
	int roll;
	char dept[100];
}std;
int main()
{
	std s[50];
	int i,n,j;
	printf("enter no. of students ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i].name);
		scanf("%d",&s[i].roll);
		scanf("%s",s[i].dept);
	}
	for(j=0;j<n;j++)
	{
		printf("%s ",s[j].name);
		printf("%d ",s[j].roll);
		printf("%s ",s[j].dept);
	}
	return 0;
}
		
	