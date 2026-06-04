#include <stdio.h>

int main()
{
    int choice;
    float balance = 1000.0, amount;

    do
    {
        printf("\n===== BANKING SYSTEM =====\n");
        printf("1. Deposit Amount\n");
        printf("2. Withdraw Amount\n");
        printf("3. Show Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance = balance + amount;
                    printf("Amount deposited successfully!\n");
                }
                else
                {
                    printf("Invalid amount!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount > balance)
                {
                    printf("Insufficient balance!\n");
                }
                else
                {
                    balance = balance - amount;
                    printf("Withdrawal successful!\n");
                }
                break;

            case 3:
                printf("Current Balance = Rs. %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

