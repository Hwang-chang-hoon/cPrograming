#include<stdio.h>

int calc(void){
	int a, b; int cnt = 0; for (a = 2; cnt < 10; a++) { 

		for (b = 2; b <= a; b++) { 

			if (b == a) { 

				printf("%d ", a);

				cnt++; 
			}
			else if 
				(a%b == 0) { 
				break; 
			}
		}
	}
	return 0;
}


int main(void)
{
	calc();
}