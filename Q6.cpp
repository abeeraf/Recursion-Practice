#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
void sumofrow(int **matrix1, int row, int column, int &evenSum, int &oddSum){

	if(row>=0)

	{	
		if (matrix1[row][column]%2==0)
		evenSum+=matrix1[row][column];
		else 
		oddSum+=matrix1[row][column];
	
		sumofrow(matrix1,row-1, column, evenSum, oddSum);
	
	}


}
void calculateSum(int **matrix1, int row, int column, int &evenSum, int &oddSum)
{
	if (column>=0)
	{sumofrow(matrix1,row, column, evenSum,oddSum);
	calculateSum(matrix1,row,column-1,evenSum,oddSum);}
}
