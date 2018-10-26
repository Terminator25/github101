#include <stdio.h>
#include <conio.h>
void main()
{long int mult=1, i=1, fact;
    printf("Input the number to calculate factorial");
    scanf("%ld", &fact);
      while(i<=fact)
        {
          mult=mult*i;
          i++;
        }
    printf("%ld", mult);
    getch();
}
