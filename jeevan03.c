#include <stdio.h>
int main()
{
    printf("1.Burger\t-Rs.129\n2.French Fries  -Rs.99\n3.Pasta \t-Rs.179\n4.Pizza \t-Rs.239\n5.Sandwich \t-Rs.149\n");
    int choice;
    printf("enter your choice from 1 to 5 :");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Food item :Burger\nPrice :129\n");
        break;
    case 2:
        printf("Food item :French Fries\nPrice :99\n");
        break;
    case 3:
        printf("Food item :Pasta\nPrice :179\n");
        break;
    case 4:
        printf("Food item :Pizza\nPrice :239\n");
        break;
    case 5:
        printf("Food item :Sandwich\nPrice :149\n");
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}
