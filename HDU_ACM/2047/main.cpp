/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月20日, 下午8:24
 * 
 * 能用long long, 就不要用double.....
 * 
 */

#include <iostream>
#include <iomanip>
using namespace std;

long long f(int n)
{
	long long* a;
	if (n>2)
		a=new long long[n];
	else
		a=new long long[2];
	a[0]=3;
	a[1]=8;
	for (int i=2; i<n; i++)
		a[i]=2*a[i-1]+2*a[i-2];
	return a[n-1];
}

int main()
{
	//cout << fixed << setprecision(0);
	int n;
	while (cin >> n)
	{
		cout << f(n) << endl;
	}
	return 0;
}