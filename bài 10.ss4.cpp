#include <stdio.h>
int main()
{
	int a, b, c;
	printf ("moi nhap so th? 1:");
	scanf ("%d",&a);
	printf ("moi nhap so thu 2:");
	scanf ("%d",&b); 
	printf ("moi nhap so thu 3:");
	scanf ("%d",&c);
	if (a>b && b>c )
	{
		printf ("%d,%d,%d",c,b,a); 
	}else
	{
		if (a<b && b<c)
		{
			printf ("%d,%d,%d",a,b,c); 
		} 
		if (b>c && c>a)
		{
			printf ("%d,%d,%d",b,c,a);
		}
		if (b>a && a>c) 
		{
		 	printf ("%d,%d,%d",b,a,c);
	    } 
	} 
	return 0; 
 } 
