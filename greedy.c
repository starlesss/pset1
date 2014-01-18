#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main (void)
{
   printf("O hai!  ");
   int i = -5;
   while (i < 0)
   {
      printf("How much change is owed?\n");
      float f = GetFloat();
      i = (int) round(f * 100);
   }
   int coins = 0;
   
   while ((i - 25) >= 0)
   {
      i = i - 25;
      coins++;
   }
   while ((i - 10) >= 0)
   {
      i = i - 10;
      coins++;
   }
   while ((i - 5) >= 0)
   {
      i = i - 5;
      coins++;
   }
   while ((i - 1) >= 0)
   {
      i = i - 1;
      coins++;
   }
   printf("%i\n", coins);
}
