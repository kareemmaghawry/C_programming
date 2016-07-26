#include <stdio.h>


int main (void)

{

 int  arr_1[2][2] , arr_2[2][2] , Result[2][2] ;
 unsigned char  i , j , x , k , m , n ;

 printf("\n Enter the elements on 1st matrix") ;
 

 for ( i = 0 ; i < 2 ; i ++ )

 {
	for ( j = 0 ; j < 2 ; j ++ )
	
	{
		printf("\n Enter a%d%d :",i+1,j+1) ;
		scanf("%d",&arr_1[i][j]);
	}
 }

 printf("\n Enter the element on 2nd matrix") ;
 
 for ( k = 0 ; k  < 2 ; k ++ )

 {
        for ( x = 0 ; x < 2 ; x ++ )

        {
                printf("\n Enter b%d%d :",k+1,x+1) ;
                scanf("%d",&arr_2[k][x]);
        }
 }

 for ( m = 0 ; m < 2 ; m ++ )

 {
        for ( n = 0 ; n  < 2 ; n ++ )

        {
                Result[m][n] = arr_1[m][n] + arr_2[m][n] ;
        }
 }
 
 k = 0 ;
 x = 0 ;
 printf("\n SUM OF MATRIX ") ;

 for ( k = 0 ; k < 2 ; k ++ )

 {
	printf("\n");

        for ( x = 0 ; x < 2 ; x ++ )

        {
                printf("   %d\t\t ",Result[k][x]) ;
 
        }

	printf("\n");
 }

 return 0 ;
}
