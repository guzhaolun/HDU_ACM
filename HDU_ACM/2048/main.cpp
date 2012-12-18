/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月21日, 上午10:02
 * 
 * 全错位排列
 * 
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
	a[0]=0;
	a[1]=1;
	a[2]=2;
	for (int i=3; i<n; i++)
		a[i]=i*(a[i-1]+a[i-2]);
	return a[n-1];
}

double g(int n)
{
	double* a;
	if (n>2)
		a=new double[n];
	else
		a=new double[2];
	a[0]=1;
	a[1]=2;
	for (int i=2; i<n; i++)
		a[i]=(i+1)*a[i-1];
	return a[n-1];
}

int main()
{
	cout << fixed << setprecision(2);
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		int m;
		cin >> m;
		cout << f(m)/g(m)*100 << '%' << endl;
	}
	return 0;
}