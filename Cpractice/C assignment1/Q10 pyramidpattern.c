//pyramid pattern
#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("enter the number of rows ");//enter how many rows you want to print
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space<= rows - i; ++space) { //to print pre spaces
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("%d ",i);// now i value assin to rows
         ++k;
      }
      printf("\n");
   }
   return 0;
}