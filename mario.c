#include <stdio.h>
#include <cs50.h>

int main (void)
{
   int h = -1;
   while (h < 0 || h > 23)
   {
      printf("Height: ");
      h = GetInt();
   }
   int space = h - 1;
   int block = 2;
   while (space >= 0)
   {
      for (int count = 0; count < space; count++)
      {
         printf(" ");
      }
      for (int count = 0; count < block; count++)
      {
         printf("#");
      }
      printf("\n");
      space = space - 1;
      block = block + 1;
   }
}
