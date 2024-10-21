#include <stdio.h>

int main() {
    int choice;
    char name[50];
    char ingredients[50];
    do {
        printf("\nRecipe Management System\n");
        printf("Enter 1 for Benne Dose ingredients\n");
        printf("Enter 2 for Biryani ingredients\n");
        printf("Enter 3 for appam ingredients\n");
        printf("Enter 4 for mandakki ingredients\n");
        printf("Enter 5 for add recipe\n");
        printf("Enter 6 for exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
