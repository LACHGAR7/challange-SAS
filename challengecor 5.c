#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C ,F;
   printf("entrer la temperature en F : ");
	scanf("%f",&F);
	C=(F-32)/1.8;
	printf(" la temprature en C : %.2f",C);

	if(C>=-6&& C<16){

	printf("froid \n");

	}

	 else if  (C<6){

	  printf ("tres froid \n");
}

	  else if  (C>16 && C <32){

	  printf ("choud \n");
}
else	if (C>32)
	printf("trés choud \n");
}
