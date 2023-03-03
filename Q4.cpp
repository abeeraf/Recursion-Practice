#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
float calculatePi(int n)
{
	if (n==1)
	return 4;

	else if (n%2==0)
	{return 4*(-1.0/(2*n-1))+calculatePi(n-1);}
	
	else if (n%2==1)
	{return 4*(1.0/(2*n-1))+calculatePi(n-1);}
}
