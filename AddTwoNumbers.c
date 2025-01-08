#include<stdio.h>
  int main() {
   int t; // t = testcase
   printf("Enter test case:");
   scanf("%d", &t);

   while(t--) {
    int a , b;
    printf("Enter a and b:");
    scanf("%d %d", &a , &b);

    int sum = a + b;
    printf("The output is: %d\n", sum);

   }
     return 0;
  }