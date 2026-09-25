#include <stdio.h>

int main()
{
    int num;
    int choice;
    printf("------MENU-------\n");
    printf("1. positive/negative\n");
    printf("2. even/odd\n");
    printf("3. leap year\n");
    printf("4. voting elligiblity\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch(choice)
        {
        case 1:
         printf("Enter the value :\n");
        scanf("%d", &num);

        if (num > 0)
            {
                printf("positive number\n");
            }
        else if (num < 0)
            {
                printf("negative number\n");
            }
        else
            {
                printf("zero\n");
            }
        break;
            case 2:
            printf("Enter the vlaue :\n");
            scanf("%d",&num);
            if(num%2==0)
            {
                printf("EVEN NUMBER\n");
            }
            else
            {
                printf("ODD NUMBER\n");
            }
        break;
        case 3:
        printf("Enter the vlaue :\n");
        scanf("%d",&num);
        if((num%400==0)||(num%4==0&&num%100!=0))
        {
            printf("LEAP YEAR\n");
        }
        else
        {
            printf("NOT A LEAP YEAR\n");
        }
        break;
        case 4:
        printf("Enter the vlaue :\n");
        scanf("%d",&num);
        if(num>=18)
        {
            printf("ELEGIBLE FOR VOTING\n");
        }
        else 
        {
            printf("NOT ELEGIBLE FOR VOTING\n");
        }
        break;
        default:
        {
            printf("WRONG VALUE ENTERED\n");
        }

    }
    return 0;
}