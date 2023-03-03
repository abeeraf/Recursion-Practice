#include<iostream>
#include<fstream>
#include<cmath>
#include<string.h>
using namespace std;
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
