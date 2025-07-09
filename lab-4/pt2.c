/* Pattern Series using nested loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n;
   printf("Enter number of rows: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=i;j++)
      {
         printf("%d ",j);
      }
      printf("\n");
   }
   for(i=n;i>=1;i--)
   {
      for(j=1;j<=i;j++)
      {
         printf("%d ",j);
      }
      printf("\n");
    }
   getch();
}
