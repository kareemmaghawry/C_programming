#include <stdio.h>
#include <curses.h>
#include <conio.h>


int main (void)

{
   char first_student[100] , second_student[100]  , temp[100], i = 0;

	printf("\nEnter first name ") ;
	gets(first_student);
	printf("\nEnter second name ") ;
	gets(second_student);	
	
		
	while ( first_student[i] !=0 )
	{
		temp[i] = first_student[i] ;
		i++ ;
	}
	
	temp[i] = 0 ;
	i = 0 ;
	while ( second_student[i] !=0 )
	{
		first_student[i] = second_student[i] ;
		i++ ;
	}
	
	first_student[i] = 0 ;
	i = 0 ;
	while ( temp[i] !=0 )
	{
		second_student[i] = temp[i] ;
		i++ ;
	}
	
	second_student[i] = 0 ;

	printf("\n first name %s \n second name %s \n",first_student,second_student) ;
return 0 ;
}
