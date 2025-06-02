#include<stdio.h>
#include<conio.h>

int Link_List_Ele_Cnt = 0;

struct Node
{
    int Data;
    struct Node *Next;
};

void Insert_First(struct Node **First,int No)
{
    struct Node *NewN = NULL;

    NewN = (struct Node*)malloc(sizeof(struct Node));

    NewN -> Data = No;
    NewN -> Next = NULL;

    if(*First == NULL)
    {
        *First = NewN;
        printf("|n\n Inside if Block of Insert First");
    }
    else
    {
        NewN -> Next = *First;
       *First = NewN;

       printf("\n Inside else Block Insert First");
    }
    printf("\n %d Element Inserted Successfully",No);

    Link_List_Ele_Cnt++;

    return;
}

void Insert_Last(struct Node **First,int No)
{
      struct Node *NewN = NULL;

    NewN = (struct Node*)malloc(sizeof(struct Node));   ///Allocation dyanamic memory for new Node in Data Section Heep

    NewN -> Data = No;
    NewN -> Next = NULL;

    if(NULL == *First)
    {
        *First = NewN;
        printf("\n Inside if block of insert Last");
    }
    else
    {
        struct Node *Temp = *First;

        while (Temp -> Next != NULL)
        {
            Temp = Temp-> Next;
        }
        Temp -> Next = NewN;
    }
    printf("\n\n %d Element Inserted at Last Position Successfully",No);
    return ;
}

void Display_Link_List(struct Node *First)
{
    if(NULL == First)
    {
        printf("\n Given Link List is Already Empty");
    }
    else
    {
        printf("\n\n Element in Given Link List are\n");

        while(First !=NULL)
        {
            printf(" |%d| ->",First -> Data);
               First = First -> Next;
        }
        printf("\n\n NULL");
    }
    return ;
}

void Delete_First(struct Node **First)
{
    if(NULL == *First)
    {
      printf("\n Link List is Already Empty");
    }
    else
    {
        struct Node *Temp = *First;

        *First = Temp -> Next;

        printf("\n\n Deleted first element in Link List = %d",Temp -> Data);

        free(Temp);
    }
    return ;
}

void Delete_Last(struct Node **First)
{
    if(NULL == *First)
    {
      printf("\n Link List is Already Empty");
    }
    else
    {
        struct Node *Temp = *First;

        if(Temp -> Next != NULL)
        {
            while(Temp -> Next -> Next != NULL)
            {
                Temp = Temp -> Next;
            }
        }
        printf("\n\n Deleted Last element in LL is = %d",Temp -> Next -> Data);

        free(Temp -> Next);

        Temp -> Next = NULL;
    }
    return;
}

int Count_Link_List_Nodes(struct Node *First)
{
    int Cnt =  0;

    if(First != NULL)
    {
        while(First != NULL)
        {
            Cnt++;
            First = First -> Next;
        }
    }
    return Cnt++;
}

void Insert_At_Position(struct Node **First,int Pos,int Val)
{
    int Ele_Cnt = Count_Link_List_Nodes(*First);

    if(Pos <= 0)
    {
        printf("\n Invalid Position To insert..!");
    }
    else if(Pos == 1)
    {
        printf("\n Insert First is = %d",First,Val);
    }
    else if(Pos >= Ele_Cnt + 1)
    {
        if(Pos == Ele_Cnt + 1)
        {
            printf("\n Insert Last is = %d",First,Val);
        }
        else
        {
            printf("\n Position you Wish Insert Element At Position %d ? (Y/N)",Ele_Cnt + 1);

            char ch = getchar();

            fflush(stdin);

            if(ch == 'Y' || ch =='y')
            {
                printf("\n Insert Last is = %d",First,Val);
            }
            else
            {
                printf("\n Ok Then Your Element is Trashed in Current LL.");
            }

         }
    }
    else
    {
        struct Node *NewN = NULL;

        NewN = (struct Node*)malloc(sizeof(struct Node));

        NewN -> Data = Val;
        NewN ->Next = NULL;

        struct Node *Temp = *First;

        while(Pos > 2)
        {
            Temp = Temp -> Next;
            Pos--;
        }
        NewN -> Next = Temp -> Next;
        Temp -> Next = NewN;
    }
    return ;
}

