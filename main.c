#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int answer = 198;
		int num;
		int trial=0;
		
		do
		{
		
			printf("guess a number:");
			scanf("%d", &num);
			
			if (num>answer)
				printf("bigger\n");
				
			else if (num<answer)
				printf("smaller\n");
				
			trial = trial+1;
	    }
	    
	    while (num!=answer);
	    

	    printf("congratulation! trial: %d\n",trial);
		
	
	

	system("PAUSE");

	return 0;	

	
	
}