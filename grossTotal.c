#include<stdio.h>
#include<omp.h>


void main()
{
	char product[5][3] = {{"Coffee,1000,1"}, {"Chocolate,450,1"}, {"Coke,260,1"}, {"Mango,400,0"}, {"chewra,300,0"}};
	const double vat = 13;
	const double charge = 10;
	int choose;

	printf("1.Coffee\n2.Chocolate\n3.Coke\n4.Mango\n5.chewra");
	printf("PLEASE choose a product: ");
	
	scanf("%d", &choose);



	#pragma omp parallel for
	
}