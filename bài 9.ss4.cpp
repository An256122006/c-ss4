#include <stdio.h>
int main() {
	int a, b, c;
	printf ("moi nhap so nãm:");
	scanf ("%d",&a);
	printf ("moi nhap so tháng:");
	scanf ("%d",&b);
	switch (b)
	{
		case 1:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=31)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break; 
		case 2:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
	    if (a % 4 == 0 && a % 100 !=0)
	   {
		   if (c>0 && c<=29)
		  {
			 printf ("%d/%d/%d",c,b,a); 
		  }else 
		   {
			 printf ("khong hop le"); 
		   } 
	    }else 
	    {
	       if (c>0 && c<=28)
		  {
			 printf ("%d/%d/%d",c,b,a); 
		  }else 
		   {
			 printf ("khong hop le"); 
		   } 	
		}
		break;
		case 3:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=31)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break;
		case 4:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=30)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break;
		case 5:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=31)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break;
		case 6:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=30)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break;
		case 7:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=31)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break;
		case 8:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=31)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break;
		case 9:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=30)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break;
		case 10:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=31)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break;
		case 11:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=30)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break;
		case 12:
		printf ("moi nhap so ngay:");
	    scanf ("%d",&c);
		if (c>0 && c<=31)
		{
			printf ("%d/%d/%d",c,b,a); 
		} else 
		{
			printf ("khong hop le"); 
		}
		break;
		default :
		   	printf ("khong hop le"); 
	 }
 return 0; 
}
	
