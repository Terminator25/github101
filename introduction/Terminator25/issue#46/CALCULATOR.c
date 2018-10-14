#include <stdio.h>
#include <conio.h>
int calc (long int a, long int b, long int op)
{long int operation;
    switch(op)
    {case 1:operation=a+b;
      break;
      case 2:operation=a-b;
      break;
      case 3:operation=a*b;
      break;
      case 4:operation=a/b;
      }
      return operation;
      }
void main()
{long int num1, num2, opera, result;
clrscr();
      printf("Operation Code\n 1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n");
      printf("Input the 2 numbers and the operation=");
      scanf("%ld %ld %ld", &num1, &num2, &opera);
      result=calc(num1, num2, opera);
      printf("%ld", result);
      getch();
}
