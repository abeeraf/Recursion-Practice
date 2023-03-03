#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
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
