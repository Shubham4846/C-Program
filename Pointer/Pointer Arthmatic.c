#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 10,No2 = 21;
    int *ptr1 = &No1;
    int *ptr2 = &No2;
    int *ptr3 = NULL;

    printf("\n %d",ptr3);
    printf("\n %d",ptr1);

    ptr3 = ptr1 - ptr2;

    printf("\n %d",ptr3);
}
