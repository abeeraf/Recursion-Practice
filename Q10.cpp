#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
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
