#include <stdio.h>
int main()
{
	int a;
	printf ("moi nhap thang :");
	scanf ("%d",&a);
	switch (a) 
	{
		case 1:
		printf ("tháng 1 có 31 ngày");
		break;
		case 2:
		printf ("tháng 2 có 28 ngày ho?c 29 ngày");
		break;
		case 3:
		printf ("tháng 3 có 31 ngày");
		break;
		case 4:
		printf ("tháng 4 có 30 ngày");
		break;
		case 5:
		printf ("tháng 5 có 31 ngày");
		break;
		case 6:
		printf ("tháng 6 có 30 ngày");
		break;
		case 7:
		printf ("tháng 7 có 31 ngày");
		break;
		case 8:
		printf ("tháng 8 có 31 ngày");
		break;
		case 9:
		printf ("tháng 9 có 30 ngày");
		break;
		case 10:
		printf ("tháng 10 có 31 ngày");
		break;
		case 11:
		printf ("tháng 11 có 30 ngày");
		break;
		case 12:
		printf ("tháng 12 có 31 ngày");
		break;
		defaul :
		printf ("ko hop le"); 
	}
	return 0; 
 } 
