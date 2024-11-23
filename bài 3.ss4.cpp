#include <stdio.h>
int main()
{
	int a;
	printf ("moi nhap gia tri:");
	scanf ("%d",&a);
	if (a%3==0 && a%5==0)
	{
		printf ("so %d chia het ca 3 và 5"); 
	} else {
	if (a%3==0) {
	 	printf ("so %d chia het cho 3"); 
	     } if (a%5==0) {
	    printf ("so %d chia het cho 5");  	
	  }
}
	  return 0; 
 } 
