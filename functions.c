#include <stdio.h>
void  dishes();
int main()
{
    int choice;
    do {

        printf("\nRecipe Management System\n");
        printf("Enter 1 for Benne Dose ingredients\n");
        printf("Enter 2 for Biryani ingredients\n");
        printf("Enter 3 for mandakki ingredients\n");
        printf("Enter 4 for exit\n");
        printf("your choice:");
        scanf("%d",&choice);
        dishes();
    }while(choice!=4);
    return 0;
    }
    void dishes(){
        int choice;
        switch(choice)
        {

   case 1:
    printf("\nIngredients for Benne Dose:\n");
                printf("1. Rice\n");
                printf("2. Urad Dal\n");
                printf("3. Butter\n");
                printf("4. Salt\n");
                printf("5. Water\n");
                break;
    case 2:
                printf("\nIngredients for Biryani:\n");
                printf("1. Rice\n");
                printf("2. Chicken or Vegetables\n");
                printf("3. Biryani Masala\n");
                printf("4. Yogurt\n");
                printf("5. Onion\n");
                printf("6. Garlic and Ginger\n");
                printf("7. Ghee\n");
                break;
    case 3:
                printf("\nIngredients for mandakki:\n");
                printf("1. mandakki\n");
                printf("2. tomato\n");
                printf("3. chat Masala\n");
                printf("4. carrot\n");
                printf("5. Onion\n");
                printf("6. Garlic and Ginger\n");
                break;
    case 4:
                printf("exiting...\n");
                break;
                
        }

        }




