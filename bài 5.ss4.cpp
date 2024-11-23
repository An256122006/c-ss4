#include <stdio.h>
int main(){
	int number1, number2, number3;
	printf ("moi nhap so thu 1:");
	scanf ("%d",&number1); 
	printf ("moi nhap so thu 2:");
	scanf ("%d",&number2);
	printf ("moi nhap so thu 3 :");
	scanf ("%d",&number3);
	if (number1 < number3 && number3 < number2)
	{
		printf ("só %d nam giua %d và %d",number3, number1, number2); 
	} 
	else
	{
		printf ("so %d khong nam gi?a",number3); 
	}  
	return 0; 
} 
