#include <stdio.h>
int main()
{
	int a, b, c;
	printf ("moi ban nhap do dai canh a:");
	scanf ("%d",&a);
	printf ("moi ban nhap do dai canh b:");
	scanf ("%d",&b);
	printf ("moi ban nhap do dai canh c:");
	scanf ("%d",&c);
	if ((a+b>c)||(b+c>a)||(c+a>b))
	{
	  printf ("%d va %d va %d la ba canh cua tam giac",a,b,c);	
	} 
	else
	{
		printf ("khong phai ba canh cua 1 tam giac"); 
	 } 
	return 0; 
} 
