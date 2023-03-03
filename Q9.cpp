#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
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
