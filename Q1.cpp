#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
int find(int array[], int length, int target)
{
	if (length<0)
	return -1;

	else if(array[length-1]==target)
	return (length-1);

	else
	find(array,length-1,target);
}
