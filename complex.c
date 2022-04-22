#include<stdio.h>
typedef struct{
	double r,i;
}comp;
comp sum(comp,comp);
int main()
{
	double r1,i1,r2,i2;
	comp res,c1,c2;
	printf("enter the real part ");
	scanf("%lf",&r1);
	printf("enter the imaginary part ");
	scanf("%lf",&i1);
	printf("enter the real part ");
	scanf("%lf",&r2);
	printf("enter the imaginary part ");
	scanf("%lf",&i2);
	c1.r=r1;
	c1.i=i1;
	c2.r=r2;
	c2.i=i2;
	
	res=sum(c1,c2);
	
	printf("the real part %.2f\n",res.r);
	printf("the imag part %.2f\n",res.i);
	
	
	return 0;
}
comp sum(comp cnum1,comp cnum2)
{
	comp s;
	comp c1,c2;
	c1.r=cnum1.r;
	c1.i=cnum1.i;
	c2.r=cnum2.r;
	c2.i=cnum2.i;
	s.r=c1.r+c2.r;
	s.i=c1.i+c2.i;
	return s;
}