#include <stdio.h>

void take_matrix( unsigned char rows , unsigned char column ) ;

int main (void)

{
   unsigned char i , j ;

	printf("\n Enter rows and column of matrix:") ;
	fflush(stdout);
	scanf("%d %d",&i,&j) ;
	take_matrix(i,j) ;


 return 0 ;
}


void take_matrix( unsigned char rows , unsigned char column )

{
   unsigned char  x , z  ;
   char matrix[rows][column] , matrix_1[column][rows] ;


	printf("Enter elements of matrix\n");

	for ( x = 0 ; x < rows ; x ++ )
	 {
 		for ( z = 0 ; z < column ; z ++)
		 {
  			printf("\nEnter element a%d%d:",x+1,z+1);
  			fflush(stdout);
			scanf("%d",&matrix[x][z]);
			matrix_1[z][x] = matrix[x][z] ;
		  }
	  }

	printf("Entered Matrix");

	for ( x = 0 ; x < rows ; x ++ )
         {
		printf("\n");
                for ( z  = 0 ; z  < column ; z ++)
                {
                      printf("\t\t%d",matrix[x][z]);

                 }
          }

	printf("\n");

	printf("\nTranspose matrix:\n\n");

	for ( x = 0 ; x < column; x ++ )
	 {
		printf("\n");
		for ( z = 0 ; z < rows ; z ++)

		 {
			printf("\t\t%d",matrix_1[x][z]);
		 }
	 }

	printf("\n") ;

}

