#include<stdio.h>
#include<conio.h>
int main()
{
    int No=21;
    const int *ptr=&No;
    int Num=10;
    printf("\n**********************");
    printf("\n\t %d",No=17);
    printf("\n\t %d",No++);
    //printf("\n\t %d",*ptr=29);
    printf("\n\t %d",*ptr++);
    printf("\n\t %d",ptr=&Num);
    printf("\n\t %d",ptr++);
    printf("\n**********************");
    getch();
    return 0;
}
