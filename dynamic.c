#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char name[100];
	float height;
}stud;
int main()
{
	stud *s;
	int n,i,j;
	printf("enter the no. of students ");
	scanf("%d",&n);
	s=(stud *)malloc(sizeof(stud)*n);
	for(i=0;i<n;i++)
	{
		printf("enter name ");
		scanf("%s",s[i].name);
		printf("enter height ");
		scanf("%f",&s[i].height);
	}
	for(j=0;j<n;j++)
	{
		printf("%s\n",s[j].name);
		printf("%.2f",s[j].height);
	}
	return 0;
}
		