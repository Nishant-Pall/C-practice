
#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#define MAXT 3

#define SPACE_TOWERS printf("   ")

typedef struct Disk

{

    int n;

    char stars[MAXT*2];

    struct Disk* Prev;

}Disk_t;

typedef struct

{

    int height;

    Disk_t* Top;

    int index;

}Tower_t;



void InitTower(Tower_t* twr);

void InitMainTower(Tower_t* twr, int num);

Disk_t* CreateEliment(Tower_t* twr,int d);

void Push(Tower_t* twr, Disk_t* disk);

void PrintTower(Tower_t* twr);

void FillStars(Tower_t* twr);

void TOH(int num ,Tower_t* A,Tower_t* B,Tower_t* C);

void Test_3_disks(Tower_t* A,Tower_t* B,Tower_t* C);





void InitTower(Tower_t* twr)

{

    twr->Top = NULL;

    twr->height = MAXT;

}



void InitMainTower(Tower_t* twr, int num)

{

    twr->Top = NULL;

    twr->height = 0;

    Disk_t* pDisk;

   

    for(int i = 0; i < num; i++)

    {

        pDisk = CreateEliment(twr,i+1);

        Push(twr,pDisk);

    }

}



void PrintTower(Tower_t* twr)

{

    Disk_t* i = twr->Top;

    if(twr->Top == NULL)

        return;

    char blank[MAXT*2] ;

    for(int i = 0; i < MAXT*2 - 1 ;i++)

    {

        blank[i] = '-';

    }

    blank[MAXT*2] = '\0';

   

    if(twr->height < MAXT)

    {

        for(int i = 0;i < MAXT - twr->height;i++ )

        {

            printf("%s\n",blank);

        }

    }

    while(i->Prev != NULL)

    {

        printf("%s\n",i->stars);

        i = i->Prev;

    }

    printf("%s\n",i->stars);

    i = i->Prev;

}



void PrintBoard(Tower_t* A,Tower_t* B,Tower_t* C)

{

    int r = MAXT;

    int c = MAXT*2;

   

    int ah = A->height;

    int bh = B->height;

    int ch = C->height;

   

    Disk_t* ad,*bd,*cd;



    char blank[MAXT*2] ;

    for(int i = 0; i < MAXT*2 - 1 ;i++)

    {

        blank[i] = '-';

    }

    blank[MAXT*2] = '\0';

   

    ad = A->Top;

    bd = B->Top;

    cd = C->Top;

   

    for(int j = 0; j < r ;j++)

    {

        if (ah++ < MAXT)

        {

            printf("%s", blank);

            SPACE_TOWERS;

        }

        else

        {

            printf("%s", ad->stars );

            ad = ad->Prev;

            SPACE_TOWERS;

        }

       

        if (bh++ < MAXT)

        {

            printf("%s", blank);

            SPACE_TOWERS;

        }

        else

        {

            printf("%s", bd->stars );

            bd = bd->Prev;

            SPACE_TOWERS;

        }

       

        if (ch++ < MAXT)

        {

            printf("%s", blank);

            SPACE_TOWERS;

        }

        else

        {

            printf("%s", cd->stars );

            cd = cd->Prev;

            SPACE_TOWERS;

        }

       

        printf("\n");

    }

}



void Push(Tower_t* twr, Disk_t* disk)

{

    if(twr->Top == NULL)

    {

       twr->Top = disk;

       twr->height++;

       return;

    }

    Disk_t* temp = twr->Top;

    twr->Top = disk;

    twr->Top->Prev = temp;

    twr->height++;

}



Disk_t* Pop(Tower_t* twr)

{

    if(twr->Top == NULL)

    {

        twr->height = 0;

        return NULL;

    }

       

    Disk_t* temp = twr->Top;

    twr->Top = temp->Prev;

    temp->Prev = NULL;

    twr->height--;

    return temp;

}



void FillStars(Tower_t* twr)

{

    int center = (2*MAXT/2) - 1;

    int j = 1;

    Disk_t* i = twr->Top;

    if(twr->Top == NULL)

        return;

    while(i->Prev != NULL)

    {

        for(int k = center; k < center + j; k++)

        {

            i->stars[k] = '*';

        }

        for(int k = center; k > center - j; k--)

        {

            i->stars[k] = '*';

        }

       

        j++;

        //printf("%s\n",i->stars);

        i = i->Prev;

       

    }

    //printf("%s\n",i->stars);

    for(int k = center; k < center + j; k++)

        {

            i->stars[k] = '*';

        }

        for(int k = center; k > center - j; k--)

        {

            i->stars[k] = '*';

        }

    i = i->Prev;

   

}



Disk_t* CreateEliment(Tower_t* twr,int n)

{

    Disk_t* pDisk;

    int * ptr;

    int len  = 0;

   

    if(n > 0)

    {

        pDisk = (Disk_t*)malloc(sizeof(Disk_t) );

    }



    pDisk->n = n;

   

    //set arr as

    int center = (2*MAXT/2) - 1;

    for(int i = 0; i < 2*MAXT - 1; i++)

    {

        if(center == i)

            pDisk->stars[i] = '*';

        else

            pDisk->stars[i] = '-';

    }

    pDisk->stars[2*MAXT] = '\0';

    pDisk->Prev = NULL;

   

    //printf("%s\n",pDisk->stars);

    return pDisk;

}



void TOH(int num ,Tower_t* A,Tower_t* B,Tower_t* C)

{

    if(num > 0)

    {

       

        TOH(num - 1,A,C,B);
        Push(C,Pop(A));
        PrintBoard(A,B,C);
        printf("\n");
       // printf("%d -> %d\n",A->index,C->index);
        TOH(num - 1,B,A,C);
    }
}
void Test_3_disks(Tower_t* A,Tower_t* B,Tower_t* C)
{

    //1 -> 3

    Push(C,Pop(A));

    PrintBoard(A,B,C);

    printf("\n");

   

    //1 -> 2

    Push(B,Pop(A));

    PrintBoard(A,B,C);

    printf("\n");

   

    //3 -> 2

    Push(B,Pop(C));

    PrintBoard(A,B,C);

    printf("\n");

   

    //1 -> 3

    Push(C,Pop(A));

    PrintBoard(A,B,C);

    printf("\n");

   

    //2 -> 1

    Push(A,Pop(B));
    PrintBoard(A,B,C);
    printf("\n");
    //2 -> 3
    Push(C,Pop(B));
    PrintBoard(A,B,C);
    printf("\n");
    //1 -> 3
    Push(C,Pop(A));
    PrintBoard(A,B,C);
    printf("\n");
}
int main()
{
    //========= Source tower  ============
    Tower_t A;
    InitMainTower(&A,MAXT);
    FillStars(&A);
    A.index = 1;
    //PrintTower(&A);
    //========= Help tower ===============
    Tower_t B;
    InitMainTower(&B,1);
    FillStars(&B);
    B.index = 2;
    Pop(&B);
    //PrintTower(&B);
    //========= Destination tower ======//
    Tower_t C;
    InitMainTower(&C,1);
    FillStars(&C);
    C.index = 3;
    Pop(&C);
    //PrintTower(&C);
    //Test_3_disks(&A,&B,&C);   
    PrintBoard(&A,&B,&C);
    printf("\n");
    TOH(MAXT,&A,&B,&C);
    //PrintBoard(&A,&B,&C);
    return 0;
}
