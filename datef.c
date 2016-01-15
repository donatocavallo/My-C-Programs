/* Write a program that formats the informations insert by users. */

#include <stdio.h>

int main(void) {

    int item_number, mm, dd, yyyy;
    float unity_price;


    printf(" Enter item number:");
    scanf("%d", &item_number );

    printf("Enter unity price:");
    scanf("%f", &unity_price );

    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%4d", &mm, &dd, &yyyy );


    printf("Item\tUnity\tPurchase\n");
    printf("        Price\tDate\n");
    printf("%d\t$%.2f\t%d/%d/%4d\n", item_number, unity_price, mm, dd, yyyy);

   return 0;

}
