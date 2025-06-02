#include"Singly Linear.h"

int main()
{
    int Num = 0, Loc = 0;
    char ch = '\0';

    struct Node *Head = NULL;

    Up:

        printf("\n\n WELCOME TO MYY SINGLY LINEAR CASE STUDY...!!");

        printf("\n\n Select Choice :");
        printf("\n\t\t 1.Insert First");
        printf("\n\t\t 2.Insert Last");
        printf("\n\t\t 3.Insert At Position");
        printf("\n\t\t 4.Delete First");
        printf("\n\t\t 5.Delete Last");
        printf("\n\t\t 6.Display Linked List");
        printf("\n\t\t 7.Exit..!!");

        printf("\n\n Enter Your Choice : ");
        ch = getchar();

        switch(ch)
        {
           case 1 :
               printf("\n Enter Value To Insert At First Position in Link_List : ");
             scanf("%d",&Num);

             Insert_First(&Head,Num);
             getch();

             fflush(stdin);
             system("cls");
             goto Up;

         case 2:
             printf("\n Enter Value To Insert At Last Position in Link_List : ");
             scanf("%d",&Num);

             Insert_First(&Head,Num);
             getch();

             fflush(stdin);
             system("cls");
             goto Up;

         case 3:
             printf("\n Enter Location Insert Value LL Between(1 to %d) : ",Link_List_Ele_Cnt);
             scanf("%d",&Loc);
             printf("\n Enter value to Insert at %d Position in LL : ",Loc);
             scanf("%d",&Num);

             Insert_At_Position(&Head,Num,Loc);
             getch();

             fflush(stdin);
             system("cls");
             goto Up;

          case 4:
               Delete_First(&Head);
               getch();

               fflush(stdin);
               system("cls");
               goto Up;

          case 5:
               Delete_Last(&Head);
               getch();

               fflush(stdin);
               system("cls");
               goto Up;

          case 6:
               Display_Link_List(Head);
               getch();

               fflush(stdin);
               system("cls");
               goto Up;

          case 7:
               fflush(stdin);
               printf("\n\n Are you sure Do you want Exit(Yes/No) : ");
               ch = getchar();

               if(ch == 'Y' || ch == 'y')
                 goto Out;

               fflush(stdin);
               system("cls");
               goto Up;

          default:
                printf("\n\n Invalid Choice,Select Correct option..!");

                getch();
                fflush(stdin);
                system("cls");

                break;
       }

    Out:
       printf("\n\n THANK YOU FOR USING OUR APPLICATION OF LINKED LIST..!");

       getch();
       return 0;
}




