// this will find total and average of total 10 numbers..
#include <stdio.h>
int main (void)
{
   int i , data , sum = 0 ;
   float avg ;
   sum = 0 ;
   printf("you will able to enter data 10 times \n");
   printf("this will find total and average of total 10 numbers......\n");

   for (i = 1 ; i <= 10 ; i++ ) {
      printf("Enter a %ddata  :",i);
      scanf("%d",&data);
      sum = sum + data ;
}

avg = sum / i ;
printf("Total is %d, The average is %f ",sum , avg);

return 0;
}
