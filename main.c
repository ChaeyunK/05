#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,i;
	int sum;

	printf("input a number");
	scanf("%d", &i);
	sum=0;

	for(n=1; n<=i; n++)
		sum=sum+n;
	printf("The result is %d\n", sum);

	system("PAUSE");

	return 0;	

	
	
}