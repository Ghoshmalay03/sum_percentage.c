#include<stdio.h>
int main(){
	int a, b, c, d, e;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	printf("Enter 3rd number: ");
	scanf("%d", &c);
	printf("Enter 4th number: ");
	scanf("%d", &d);
	printf("Enter 5th number: ");
	scanf("%d", &e);
	
	int sum=(a+b+c+d+e);
	float percentage=((a+b+c+d+e)/500)*100;
	printf("Total: %d\t", sum);
	printf("Percentage: %.2f", percentage);
	
	return 0;
}
