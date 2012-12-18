/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月20日, 下午8:11
 */

#include <iostream>
#include <iomanip>
using namespace std;

double f(int n)
{
	double* a;
	if (n>3)
		a=new double[n];
	else
		a=new double[3];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	for (int i=3; i<n; i++)
		a[i]=a[i-1]+a[i-2];
	return a[n-1];
}

int main()
{
	cout << fixed << setprecision(0);
	int n;
	while (cin >> n)
	{
		cout << f(n) << endl;
	}
	return 0;
}