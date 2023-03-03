#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
//Q1
int find(int array[], int length, int target)
{
	if (length<0)
	return -1;

	else if(array[length-1]==target)
	return (length-1);

	else
	find(array,length-1,target);
}
//Q2
bool isPrime(int n, int i = 2)
{
	if (n<2)
	return 0;
	
	else if (i==n)
	return 1;

	else if (n%i!=0)	
	isPrime(n, i+1);
	
	else if (n%i==0)
	return 0;
}
//Q3
char findUpperCase(char * str, int index)
{
	if(str[index]>=65 && str[index]<=90)
	return str[index];
	
	else if(str[index]!='\0')
	findUpperCase(str,index+1);
}
//Q4
float calculatePi(int n)
{
	if (n==1)
	return 4;

	else if (n%2==0)
	{return 4*(-1.0/(2*n-1))+calculatePi(n-1);}
	
	else if (n%2==1)
	{return 4*(1.0/(2*n-1))+calculatePi(n-1);}
}
//Q5
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
//Q6
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
//Q7
void printchar(int times, ofstream &output)
{
	if (times>=1)
	{output<<" ";
	printchar(times-1,output);}
}


void printPattern1(int start, int end, ofstream &output)
{
	if (start<=(end/2-1))
	{
		printchar(start,output);
		output<<"*"<<endl;
		printPattern1(start+1,end,output);
		printchar(start,output);
		output<<"*"<<endl;
	}
	else if (start==(end/2))
	{printchar(end/2,output);
	output<<"*"<<endl;}
}
//Q8
void printchar3(int times, char ch, ofstream &output)
{
	if (times>1)
	{output<<ch;
	printchar3(times-1,ch,output);}
}

void printPattern2(int mline, int startLine, int space, ofstream &output)
{
	if(mline>1)	
			{
			printchar3(mline,' ',output);
			printchar3(startLine*2-1,'*',output);
			output<<"*";
			printchar3(startLine*2-2,' ',output);
			output<<endl;
			printPattern2(mline-1,startLine+1,space,output);
			printchar3(mline,' ',output);
			printchar3(startLine*2-1,'*',output);
			output<<"*";
			printchar3(startLine*2-2,' ',output);
			output<<endl;
			}
			
	else if(mline==1)
			{
			printchar3(startLine,'*',output);
			output<<"*";
			printchar3(startLine,'*',output);output<<endl;}

}
//Q9
void printchar2(int times, char ch, ofstream &output)
{
	if (times>1)
	{output<<ch;
	printchar2(times-1,ch,output);}
}

void printPattern3(int sp, int mLine, ofstream &output)
{


if(mLine>1)	
		{printchar2(sp,' ',output);
		output<<"*";
		printchar2(mLine*2-2,' ',output);
		output<<"*";
		printchar2(mLine*2-1,' ',output);
		output<<endl;
		printPattern3(sp+1,mLine-1,output);
		printchar2(sp,' ',output);
		output<<"*";
		printchar2(mLine*2-2,' ',output);
		output<<"*";
		printchar2(mLine*2-1,' ',output);
		output<<endl;
		}
		
else if(mLine==1)
		{
		printchar2(sp,' ',output);
		output<<"*"<<endl;}


}
//Q10
long factorial(int n)
{
	if(n==1)
	return 1;
	else 
	return n*factorial(n-1);
}
long permutate(int n, int r)
{
	return (factorial(n)/factorial(n-r));

}
//Q11

void printSum(int arr[], int size, int **sumTriangle, int row, int column)
{
	if(row>0)			
		{	if(size==column)
			{sumTriangle[size-1][size-row]=arr[size-row];
			printSum(arr, size, sumTriangle, row-1,column);}
			else
			{sumTriangle[size-1][size-row]=sumTriangle[size][size-row]+sumTriangle[size][size-row+1];
			printSum(arr, size, sumTriangle, row-1,column);}
		}
	else 
	return;
}

void printSumTriangle(int arr[], int size, int **sumTriangle, int row, int column)
{

	
	if(size==0)
	return ;
	else 
	{
		printSum(arr, size, sumTriangle, row,column);
		printSumTriangle(arr, size-1, sumTriangle, row-1, column);
	}

}

//Q12
int choclates(int mon,int wrap)
{
	if (mon<wrap)
	return 0;
	else 
	return (mon/wrap+choclates((mon/wrap)+mon%wrap, wrap));
}
int countMaxChoco(int money, int price, int wrap)
{
	if(money<price)
	return 0;
	
	else 
	return ((money/price)+ choclates((money/price),wrap));
}
bool solveNQUtil(int **board, int N, int col)
{
//write your code here for question 13
}

//PATTERN 1 MAIN
/*int main()
{
	
ofstream output("sample.txt", ios::out);
	if (output)
	{
		printPattern1(1, 10, output);
	}
	output.close();

}*/

//PATTERN 2 MAIN
/*int main()
{
ofstream output("sample.txt", ios::out);
	if (output)
	{
		printPattern2(5,1,5, output);
	}
	output.close();

}*/

//PATTERN 3 MAIN
/*int main()
{
	
ofstream output("sample.txt", ios::out);
	if (output)
	{
		printPattern3(1,5, output);
	}
	output.close();

}*/






