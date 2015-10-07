#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	int i=0;
	int term1; 
	int term2; 
	int operator;


	if (argc==1){
		printf("1 is optellen, 2 is vermenigvuldigen, 3 is aftrekken, 4 is delen\n");	
		return 0;
	}

	term1=atoi(argv[1]);
	term2=atoi(argv[2]);
	operator=atoi(argv[3]);	
	
	if (operator==1)
		printf("de som van %i en %i = %i\n	",term1,term2,term1+term2);
	if (operator==2)
		printf("Het product van %i en %i = %i\n",term1,term2,term1*term2);

	if (operator==3)
		printf("Het verschil van %i en %i = %i\n",term1,term2,term1-term2);

	if (operator==4){
		if (term2==0){
			printf("delen door nul is flauwe kul!\n");
			return 0; 
		}
		printf("Het quotient van %i en %i = %i\n",term1,term2,term1/term2);
	}

	return 0;
}

