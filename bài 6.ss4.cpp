#include <stdio.h>
int main() {
	int a, b, sodien, sotien;
	printf ("moi nhap so dien dau thang:");
	scanf ("%d",&a);
	printf ("moi nhap so dien cuoi thang:");
	scanf ("%d",&b);
	if (a>b)
	{
		printf ("khong hop le");
	} else
	{
	   sodien =	b - a;
	    if (0 <= sodien && sodien < 50)
	 	{
	 	  sotien = sodien*10000;
		   printf ("so tien cua ban thang nay la : %d",sotien);	
		}
		if (50 <= sodien && sodien < 100)
	 	{
	 	  sotien = sodien*15000;
		   printf ("so tien cua ban thang nay la : %d",sotien);	
		}
		if (100 <= sodien && sodien < 150)
	 	{
	 	  sotien = sodien*20000;
		   printf ("so tien cua ban thang nay la : %d",sotien);	
		}
		if (150 <= sodien && sodien < 200)
	 	{
	 	  sotien = sodien*25000;
		   printf ("so tien cua ban thang nay la : %d",sotien);	
		}
		if (200 <= sodien)
	 	{
	 	  sotien = sodien*30000;
		   printf ("so tien cua ban thang nay la : %d",sotien);	
		}
	}
return 0;	
}
