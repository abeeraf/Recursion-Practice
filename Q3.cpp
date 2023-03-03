#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
char findUpperCase(char * str, int index)
{
	if(str[index]>=65 && str[index]<=90)
	return str[index];
	
	else if(str[index]!='\0')
	findUpperCase(str,index+1);
}
