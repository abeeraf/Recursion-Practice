#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
int checkEqual(int ** matrix1, int **matrix2, int row, int column)
{	
	static int c=row;
	if (row<1)
		{
			column--;
			if((column<1) && (row<1))
			return 1;
			
			else 
			{
				row=c;
				if (matrix1[row-1][column-1]==matrix2[row-1][column-1])
				checkEqual(matrix1, matrix2, row-1, column);
				else 
				return 0;
			}
		}
	if (row>=1)
		{	
			if (matrix1[row-1][column-1]==matrix2[row-1][column-1])
			checkEqual(matrix1, matrix2, row-1, column);
			else 
			return 0;
		}
	
	
}
