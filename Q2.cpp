#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
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
