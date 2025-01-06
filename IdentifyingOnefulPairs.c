#include<stdio.h>
  int main() {
    int a,b ;
    printf("Enter numbers:");
    scanf("%d %d", &a , &b);


   if((a+b+(a*b))==111) {
       printf("These are onefulpair ");
}  else {
      printf("No onefulpair");
}

    return 0;

    
  }