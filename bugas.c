#include <stdio.h>
int main()
{
    int customers;
    int containers;
    int totalcontainers = 0;
    float amount;
    float discount;
    float totaldiscount = 0;
    float totalrevenue = 0;
    
    printf("Enter Today's Number of Customers: ");
    scanf("%d", &customers);
    
    for (int i = 1; i <= customers; i++){
        printf("\nCustomer %d\n", i);
        printf("Enter Number of Containers Purchased: ");
        scanf("%d", &containers);
        
        amount = containers * 30;
        discount = 0;
        
        if (containers >= 10){
            discount = amount * 0.05;
        }
        
        amount = amount - discount;
        
        printf("Discount: P%.2f\n", discount);
        printf("Amount Payable: P%.2f\n", amount);
        
        totalcontainers += containers;
        totaldiscount += discount;
        totalrevenue += amount;

        printf("\nSummary of Sales\n");
        printf("Total Containers Sold: %d\n", totalcontainers);
        printf("Total Discounts: P%.2f\n", totaldiscount);
        printf("Total Revenue: P%.2f\n", totalrevenue);
    }

    return 0;
}