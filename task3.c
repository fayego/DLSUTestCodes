#include <stdio.h>
#include <stdlib.h>
 
int main(void){
 
	float int1;
	float int2;
	float int3;
	float first;
	float second;
	float third;
 
	printf("Input first integer: ");
	scanf("%f",&int1);
	printf("Input second integer: ");
	scanf("%f",&int2);
	printf("Input third integer: ");
	scanf("%f",&int3);
	printf("Input first floating number: ");
	scanf("%f",&first);
	printf("Input second floating number: ");
	scanf("%f",&second);
	printf("Input third floating number: ");
	scanf("%f",&third);
 
	//convert
	printf("%f\n",int1);
	printf("%.3f\n",int2);
	printf("%.4f\n",int3);
	printf("%.4f\n",first);
	printf("%.4f\n",second);
	printf("%.4f\n",third);
 
	return 0;
}