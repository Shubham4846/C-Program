#include<stdio.h>
#include<conio.h>
int main()
{
  int i=0,j=0,iNo=0;
   printf("\n=================================================================================\n");

  printf("\n Enter The Number");
  scanf("%d",&iNo);

   for(i=1;i<=iNo;i++)
   {
    for(j=1;j<=iNo;j++)
    {
       if(i==j && i+j<=iNo+1 || i>j && i+j<=iNo+1 || i<=iNo/2+1 && i>=j)
       {
          printf(" * ");
       }
       else
       {
          printf("   ");
       }
    }
    printf("\n");
  }
   printf("\n=================================================================================\n");

  getch();
  return 0;

}
