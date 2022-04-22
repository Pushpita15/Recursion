#include<stdio.h>
typedef struct {
	float inch;
	float feet;
}dis;
int main()
{
	dis d1,d2,res;
	float in1,feet1,in2,feet2;
	printf("enter the inch ");
	scanf("%f",&in1);
	printf("enter the feet ");
	scanf("%f",&feet1);
	printf("enter the inch ");
	scanf("%f",&in2);
	printf("enter the feet ");
	scanf("%f",&feet2);
	d1.inch=in1;
	d1.feet=feet1;
	d2.inch=in2;
	d2.feet=feet2;
	res.inch=d1.inch+d2.inch;
	res.feet=d1.feet+d2.feet;
	printf("the total distance is %.2f feet %.2f  inch",res.feet,res.inch);
	return 0;
}

	
	