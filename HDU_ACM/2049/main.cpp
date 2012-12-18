/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月21日, 下午12:07
 * 
 * 尽量用long long 不用long int....
 * 
 */

#include <iostream>
#include <iomanip>
using namespace std;

long long f(int n)
{
	long long* a;
	if (n>3)
		a=new long long[n];
	else
		a=new long long[3];
	a[0]=0;
	a[1]=1;
	a[2]=2;
	for (int i=3; i<n; i++)
		a[i]=i*(a[i-1]+a[i-2]);
	return a[n-1];
}

long long nCm(int n, int m)
{
	long long result=1;
	for (int i=0; i<m; i++)
	{
		result*=n-i;
		result/=i+1;
	}
	return result;
}

int main()
{
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		int a,b;
		cin >> a >> b;
		cout << nCm(a,b)*f(b) << endl;
	}
	return 0;
}