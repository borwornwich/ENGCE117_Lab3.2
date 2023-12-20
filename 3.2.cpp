#include <stdio.h>

struct student {
	char name[ 20 ] ;
	int age ;
	char sex ;
	float gpa ;
} ;

void upgrade( struct student *child ) ;

int main() {
	struct student aboy ;
	while( true ) {
		printf( "Type M for Man or m for Women : " ) ;
		scanf( " %c", &aboy.sex ) ;
		if( aboy.sex == 'M' || aboy.sex == 'm' ) {
			printf( "--------------------------------\n" ) ;
			break ;
		}//end if
	}//end while
	aboy.sex = 'M' ;
	aboy.gpa = 3.00 ;
	upgrade( &aboy ) ;
	printf( "%.2f", aboy.gpa ) ;
	return 0 ;
}//end function

void upgrade( struct student *child ) {
	if ( ( *child ).sex == 'M' ) {
		( *child ).gpa += ( *child ).gpa * 0.1 ;
	} else if ( ( *child ).sex == 'm' ) {
		( *child ).gpa += ( *child ).gpa * 0.2 ;
	}
}
