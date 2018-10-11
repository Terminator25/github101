#include <stdio.h>
#include <conio.h>
void main()
{int mult=1, i=1, fact;
printf("Input the number to calculate factorial");
scanf("%d", &fact);
while(i>=fact)
{
mult=mult*i;
i++;
}
getch();
}
