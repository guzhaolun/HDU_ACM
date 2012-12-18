/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月20日, 下午7:03
 */

#include <iostream>
#include <iomanip>
using namespace std;

double f(int n)
{
	double* a=new double[n];
	a[0]=3;
	a[1]=6;
	a[2]=6;
	for (int i=3; i<n; i++)
		a[i]=a[i-1]+a[i-2]*2;
	double result=a[n-1];
	delete[] a;
	return result;
}

int main()
{
	int n;
	cout << fixed << setprecision(0);
	while (cin >> n)
	{
		cout << f(n) << endl;
	}
	return 0;
}

