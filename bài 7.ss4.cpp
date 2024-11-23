#include <stdio.h>
int main() {
	int a;
	printf ("moi nhap so nãm:");
	scanf ("%d",&a);
	if (a % 4 == 0 && a % 100 !=0)
	{
		printf ("nam %d la nãm nhuan",a); 
	} else
	{
		printf ("nãm %d khong phai nãm nhuan ", a); 
	} 
	return 0; 
}
