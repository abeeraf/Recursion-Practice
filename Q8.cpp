#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
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
