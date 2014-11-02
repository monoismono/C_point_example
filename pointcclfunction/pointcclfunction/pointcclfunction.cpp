// pointcclfunction.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a = 1, b = 2 , c = 3 , *ptr1 ;
	printf( "This example only use on X64 \n\n " );

	printf( "a = %d ,\n &a = %d ,\n\n " , a , &a) ;
	printf( "b = %d ,\n &b = %d ,\n\n " , b , &b) ;
	printf( "c = %d ,\n &c = %d ,\n\n " , c , &c) ;

	printf("sizeof a %d , sizeof b %d , sizeof c %d , sizeof ptr1 %d \n\n ", sizeof( a ) , sizeof( b ) , sizeof( c ) , sizeof( ptr1 ) );
	ptr1 = &a ;

	printf( "ptr1 ( &a) = %d ,\n &ptr1 ( &&a ) = %d ,\n *ptr1 ( *&a ) = %d \n\n " , ptr1 , &ptr1 , *ptr1) ;

	ptr1 -= 3 ;

	printf( "ptr1-3 = %d ,\n &(ptr1-3) = %d ,\n *(ptr1-3) = %d \n\n " , ptr1 , &ptr1 , *ptr1) ;

	ptr1 -= 3 ;

	printf( "ptr1-3 = %d ,\n &(ptr1-3) = %d ,\n *(ptr1-3) = %d \n\n " , ptr1 , &ptr1 , *ptr1) ;



	
	system("PAUSE");
	return 0;
}

