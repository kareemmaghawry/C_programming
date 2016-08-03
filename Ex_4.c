#include <stdio.h>

void Take_array ( int n );

int main (void) 


{
  int i ; 

	printf("\nEnter no of elements : ");
	scanf("%d",&i) ;
	Take_array(i) ;

  return 0 ;
}



void Take_array ( int n )

{
	
   int x , z , y ;
   int  array[n] , array_1 [n] ;

	for ( x = 0 ; x < n ; x++) 

	 {

		scanf("%d",&array[x]) ;
		array_1[x] = array[x] ;
	  } 

	printf("Enter the element to be inseted : ") ;
	scanf("%d",&z) ;
	printf("Enter the location : ") ;
	scanf("%d",&y) ;
	for ( x = y ; x < n+1 ; x++ ) 
	 
	{
		array_1[x] = array[x-1] ;


	}

	array_1[y-1] = z ;
	for ( x = 0 ; x < n+1 ; x++ )
	
	{

		printf("\t%d",array_1[x]) ;
	}
	printf("\n\n") ;
}	
