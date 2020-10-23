#include<stdio.h>
#include<conio.h>
int main()
{
    int Arr1[5]={0},Arr2[5]={0},Arrsum[5]={0};
    int i=0;

    printf("\n=======================================================\n");

    printf("\n Enter The First Element:");

    for(i=0;i<5;i++)
    {
        printf("\n Enter The Element");
        scanf("%d",&Arr1[i]);
    }
    printf("\n Enter The Second Element:");

    for(i=0;i<5;i++)
    {
        printf("\n Enter The Element");
        scanf("%d",&Arr2[i]);

        system("cls");
    }
    printf("\n=======================================================\n");

    printf("\n ********Enter The division Of Array Of Element:********");
    printf("\n");

    for(i=0;i<5;i++)
    {
        printf("%d",Arr1[i]/Arr2[i]);
        printf("\n");
    }
    printf("\n=======================================================\n");
    getch();
    return 0;
}

