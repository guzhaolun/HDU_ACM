/* 
 * File:   main.cpp
 * Author: nopower0
 *
 * Created on 2012年3月21日, 下午1:17
 */

#include <iostream>
using namespace std;

int f(int n)
{
	if (n==1)
		return 2;
	else
	{
		int* a=new int[n+1];
		a[1]=2;
		for (int i=2; i<=n; i++)
			a[i]=a[i-1]+4*i-3;
		return a[n];
	}
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		cout << f(a) << endl;
	}
	return 0;
}