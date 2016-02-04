#include<stdio.h>
int main(void)

{
    int  value, nodes;

    printf("Immettere valore velocità vento (nodi):");
		scanf("%d", &value);
		if (value < 1)
       printf("Calmo\n");
		else if (value <= 3 )
       printf("Bava di vento\n");
		else if (value <= 27 )
       printf("Brezza\n");
		else if (value <= 47)
       printf("Burrasca\n");
		else if (value <= 63)
       printf("Tempesta\n");
       else if (value > 63)
          printf("Uragano\n");

	return 0;
}
