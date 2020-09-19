#include "header.h"




int main() {
  
    do
    {
    printf("\n1.Addition\n2.subtraction\n3.Multiplication\n4.Division\n5.Remainder\n");
    printf("6.Increment(++)\n7.decrement(--)\n8.Check equality(==)\n9.Check inequality(!=)\n");
    printf("10.Greater than(>)\n11.Lesser than(<)\n");
    printf("12.Logical AND(&&)\n13.Logical OR(||)\n14.Logical NOT(!)\n15.Exit");
    printf("\nEnter your choice:"); 
    scanf("%d", &operator);
    if(operator<14)
    {
    if(operator==6||operator==7)
    {printf("Enter a number:");scanf("%d",&first);}
    else
    {
    printf("Enter two operands: ");
    scanf("%d %d", &first, &second);
    }
    }
    else if(operator==14)
    { printf("Enter a binary digit");
      scanf("%d",&first);
    }
    switch (operator) 
	{
    case 1:
        printf("%d + %d = %d", first, second, first + second);
        break;
    case 2:
        printf("%d - %d = %d", first, second, first - second);
        break;
    case 3:
        printf("%d * %d = %d", first, second, first * second);
        break;
    case 4:
        printf("%d / %d = %d", first, second, first / second);
        break;
    case 5:
        printf("%d %% %d = %d",first, second, first % second);
        break;
    case 6:
        printf("++ %d = %d",first,++first);
        break; 
    case 7:
        printf("-- %d = %d",first,--first);
        break; 
    case 8:
         if(first==second)
         { printf("%d and %d are \"Equal\"",first, second);}
         else
         { printf("%d and %d are \"Not Equal\"",first, second);}
         break;
    case 9:
         if(first!=second)
         { printf("%d and %d are \" Not Equal\"",first, second);}
         else
         { printf("%d and %d are \"Equal\"",first, second);}
         break;
    case 10:
         if(first>second)
         { printf("%d > %d",first, second);}
         else
         {printf("%d > %d",second, first);}
         break;
    case 11:
         if(first<second)
         { printf("%d < %d",first, second);}
         else
         {printf("%d > %d",second, first);}
         break;
    case 12:
         if(first&&second)
         { printf("%d && %d is True",first, second);}
         else
         {printf("%d && %d is False",first, second);}
         break;
    case 13:
         if(first||second)
         { printf("%d || %d is True",first, second);}
         else
         {printf("%d || %d is False",first, second);}
         break;
    case 14:
         if(!first)
         { printf("! %d is True",first);}
         else
         {printf("!%d is False",first);}
         break;
    case 15: break;
   default:
        printf("Error! Enter a valid choice!!!");
    }
    }while(operator!=15);
    return 0; 
}






