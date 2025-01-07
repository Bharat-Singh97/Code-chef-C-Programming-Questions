#include<stdio.h>
  int main() {
    int num, factor = 0, i = 1;
    printf("Enter number:");
    scanf("%d", &num);
    while (i<=num)
    {
        if (num%i==0)
        {
            factor++;
        }
        i++;
    }
    if (factor == 2)
    {
        printf("Prime Number: %d", num);
    }else {
        printf("Not Prime: %d",num);
    }
    return 0;
      }