#include <stdio.h>
int main() {
	int a;
	printf ("moi nhap so n�m:");
	scanf ("%d",&a);
	if (a % 4 == 0 && a % 100 !=0)
	{
		printf ("nam %d la n�m nhuan",a); 
	} else
	{
		printf ("n�m %d khong phai n�m nhuan ", a); 
	} 
	return 0; 
}
