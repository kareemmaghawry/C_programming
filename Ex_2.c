#include <stdio.h>

 int main (void)

{
  int j , i ;
  float  arr[i] ,  average ;

 printf("\n Enter Number of data: ") ;
 scanf("%d",&i);
 
 for ( j = 0 ; j < i ; j ++)

 {
	printf("\n%d. Enter number:",j+1);
 	scanf("%f",&arr[j]);
	average += arr[j];
 }
 
 average = average / i ;
 printf("\nAverage = %0.2f\n ",average);
 return 0 ;
}
