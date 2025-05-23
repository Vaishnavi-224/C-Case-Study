#include"Fork_Array_Lib.h"
#include<stdlib.h>

int main()
{
    char ch = '\0';
    int Choice = 0, No = 0, I = 0, Bills[7] = {};

    while(1)
    {
        printf("\n ===========******==========");
        printf("\n\n Welcome To Fork Billing App Using Array \n ");

        printf("\n Select Choice :");
        printf("\n\t\t 1. Accept Bills");
        printf("\n\t\t 2. Display All Bills");
        printf("\n\t\t 3. Search Bill(Index)");
        printf("\n\t\t 4. Search Bill(Location)");
        printf("\n\t\t 5. Count of Particular Bill Amount");
        printf("\n\t\t 6. Even Bills Count");
        printf("\n\t\t 7. Odd Bills Count");
        printf("\n\t\t 8. Zero Bills Count");
        printf("\n\t\t 9. Sum of All Bills");
        printf("\n\t\t 10. Get Minimum Bill Amount");
        printf("\n\t\t 11. Get Maximum Bill Amount");
        printf("\n\t\t 12. Exit");

        printf("\n\n Enter Your Choice :");
        scanf("%d",&Choice);

        switch(Choice)
        {

        case 1:

            Accept_Elements(Bills,7);
            getch();
            fflush(stdin);
            system("cls");

            break;

        case 2:

            Display_All_Elements(Bills,7);
            getch();
            fflush(stdin);
            system("cls");

            break;

        case 3:

            printf("\n Enter Bill Amount Searched = ");
            scanf("%d",&No);

            I = Search_Element(Bills,7,No);

            if(I == -1)
            {
                printf("\n Bill %d not Found %d in Array",No);
            }
            else
            {
                printf("\n Bill %d Found At %d Index in Array",No,I);
            }

            getch();
            fflush(stdin);
            system("cls");

            break;


        case 4:

            printf("\n Enter Bill Amount to Count = ");
            scanf("%d",&No);

            I = Search_Element(Bills,7,No);

            if(I == -1)
            {
                printf("\n Bill %d Not Found in Array",No);
            }
            else
            {
                printf("\n Bill %d Found At %d Location in Array",No,I+1);
            }

            getch();
            fflush(stdin);
            system("cls");

            break;

        case 5:

            printf("\n Enter Bill Amount to Searched = ");
            scanf("%d",&No);

            printf("\n Bill Amount %d Found At %d Times in Array",No, Count_Of_Element(Bills,7,No));


            getch();
            fflush(stdin);
            system("cls");

            break;


        case 6:

            printf("\n Even Bill Count is %d.", Even_Elements_Count(Bills,7));

            getch();
            fflush(stdin);
            system("cls");


            break;


        case 7:

            printf("\n Odd Bill Count is %d.",Odd_Elements_Count(Bills,7));


            getch();
            fflush(stdin);
            system("cls");

            break;


        case 8:

            printf("\n Zero Bill Count is = %d.",Zero_Elements_Count(Bills,7));


            getch();
            fflush(stdin);
            system("cls");

            break;


        case 9:

            printf("\n Sum of All Bills is %d.",Sum_Of_All_Elements(Bills,7));

            getch();
            fflush(stdin);
            system("cls");


            break;


        case 10:

            printf("\n Get Maximum Bill Amount of Array is %d.",Find_Max_Element(Bills,7));

            getch();
            fflush(stdin);
            system("cls");


            break;


        case 11:


            printf("\n Get Minimum Bill Amount of Array is %d.",Find_Min_Element(Bills,7));

            getch();
            fflush(stdin);
            system("cls");


            break;


        case 12:

            fflush(stdin);
            printf("\n Are You Sure Do You Want To Exit Application ???(Yes/No):");
            ch = getchar();

            if(ch == 'y' || ch == 'Y')
                          goto Out;

            fflush(stdin);
            system("cls");


            break;


        default :

            printf("\n Invalid Choice!!!");


            getch();
            fflush(stdin);
            system("Cls");

            break;

      }

  }

  Out:

      printf("\n =========******============");
      printf("n Thanks For Using Our Application \n");

      getch();
      return 0;

}
