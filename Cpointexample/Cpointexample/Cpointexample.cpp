// Cpointexample.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 10 , k ;
	int *ptrl;
	printf("i content= %d ,\n &i address= %d \n\n", i , &i);
	printf("k content= %d ,\n &k address= %d \n\n", k , &k);

	ptrl = &i;

	printf("ptrl's call by address(ptrl = &i) form i's content= %d ,\n &ptrl address(&ptrl = &i) = %d \n\n", ptrl , &ptrl);
	printf("*ptrl is(*ptrl = *&i) %d \n\n",*ptrl);

	*ptrl = i;
	printf("if *ptrl = i ,\n *ptrl = %d ,\n ptrl = %d, &ptrl = %d \n\n " , *ptrl , ptrl , &ptrl );
	

	k = *ptrl;

	printf("k's content from call by value %d ,\n &k address = %d \n\n", k , &k);




	system("PAUSE");
	return 0;
}

